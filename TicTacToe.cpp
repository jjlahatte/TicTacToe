/*Jason LaHatte, Tic Tac Toe*/
#include <iostream>
using namespace std;

//function prototypes
void board();
int checkWin();

char square[10] = {'o','1','2','3','4','5','6','7','8','9'}; //this array will be the grid that the board will be drawn from

int main()
{
	int player = 1;
	int t,choice; /*t is used to call checkWin, 
				  	  choice lets player enter move*/
	char gameMark; //will be used to check valid moves
	
	cout << "\t***********************\n";
	cout << "\t*Tic Tac Toe, By Jason*\n";
	cout << "\t***********************\n\n";
	cout << "To play, enter the number corresponding to an open spot on the board\n\n";
	
	do
	{
		board();
		if(player % 2) //assigns player assignment 
			player = 1; 
		else
			player = 2; 

		cout << "\nPlayer " << player << ", enter a number:  ";
		cin >> choice;
		
		/* the following series of steps
		   shows how the program will check if the player
		   has inputted a valid move or not */ 
		
		if(player == 1) 
				gameMark = 'X';
		else
			gameMark = 'O';
			 if (choice == 1 && square[1] == '1')
			square[1] = gameMark;
		else if (choice == 2 && square[2] == '2')
			square[2] = gameMark;
		else if (choice == 3 && square[3] == '3')
			square[3] = gameMark;
		else if (choice == 4 && square[4] == '4')
			square[4] = gameMark;
		else if (choice == 5 && square[5] == '5')
			square[5] = gameMark;
		else if (choice == 6 && square[6] == '6')
			square[6] = gameMark;
		else if (choice == 7 && square[7] == '7')
			square[7] = gameMark;
		else if (choice == 8 && square[8] == '8')
			square[8] = gameMark;
		else if (choice == 9 && square[9] == '9')
			square[9] = gameMark;
		else
			cout<<"Invalid move ";
		
		t=checkWin();
		player++;
		}
		while(t==-1); //this will continue the game until a draw or win
		board();
		if(t==1) //conclusion outcomes
			cout << "Player " << --player << " wins!!\n";
		else
			cout << "The game is a draw...\n";
		
return 0;
}

int checkWin() //this function checks for the winner
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1; //returning 1 corresponds to if player one marks X and wins.
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'  //checks for errors
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1; //-1 goes for player2 and O 
}

void board() //This function draws the tic tac toe board
{
	cout << "Player 1 uses X, Player 2 uses O\n\n";

	cout <<"\t" <<square[1] <<" " <<square[2] <<" " <<square[3] <<endl;
	cout <<"\t" <<square[4] <<" " <<square[5] <<" " <<square[6] << endl;
	cout <<"\t" <<square[7] <<" " <<square[8] <<" " <<square[9] << endl;
}



