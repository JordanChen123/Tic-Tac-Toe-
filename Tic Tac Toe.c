#include <stdio.h>
#include <stdlib.h>

/*

        Name: Jordan Chen
        Date: 28/04/2023
        UBC E-Mail: jchen197@student.ubc.ca

        When run, the program simulates a classic game of a Two player Tic Tac Toe game on a 3 x 3 dimensioned board.

*/

        char gameBoard[10] = {'o','1','2','3','4','5','6','7','8','9'}; // The game board

        int checkWin();

        void playerTurn(int, int, char);

        void boardVisual();

// Main function
int main(){

	int player = 1, winIndicator = -1 , choice;

	char mark; // Either X or O

	while (winIndicator == -1) {

		boardVisual();

        if (player % 2 != 0) {

            player = 1;

            mark = 'X';

        }

        else {

            player = 2;

            mark = 'O';

        }

		printf("Player %d, Please enter your choice : ",player);

		scanf("%d",&choice);

		playerTurn(choice, player, mark);

        winIndicator = checkWin();

        player++;

}

        boardVisual();

	if (winIndicator==1) {

		printf("Congratulations! Player %d won",--player);

	}

	else {

		printf("The game was a draw!");

	}

		getch();

		return 0;

}

// Function which after each turn, checks whether or not a player has won
int checkWin(){

	if(gameBoard[1] == gameBoard[2] && gameBoard[2] == gameBoard[3])
		return 1;

	else if (gameBoard[4] == gameBoard[5] && gameBoard[5] == gameBoard[6])
		return 1;

	else if(gameBoard[7] == gameBoard[8] && gameBoard[8] == gameBoard[9])
		return 1;

	else if(gameBoard[1] == gameBoard[4] && gameBoard[4] == gameBoard[7])
		return 1;

	else if(gameBoard[2] == gameBoard[5] && gameBoard[5] == gameBoard[8])
		return 1;

	else if(gameBoard[3] == gameBoard[6] && gameBoard[6] == gameBoard[9])
		return 1;

	else if(gameBoard[1] == gameBoard[5] && gameBoard[5] == gameBoard[9])
		return 1;

	else if(gameBoard[3] == gameBoard[5] && gameBoard[5] == gameBoard[7])
		return 1;

	else if(gameBoard[1] != '1' && gameBoard[2] != '2' && gameBoard[3] != '3' && gameBoard[4] !='4' && gameBoard[5] != '5' && gameBoard[6] != '6' && gameBoard[7] != '7' && gameBoard[8] != '8' && gameBoard[9] != '9')
		return 0;

	else
		return -1;
}

// Function which makes the visual changes on the board corresponding to the players choice
void playerTurn(int choice, int player, char mark){

    if(choice == 1 && gameBoard[1] == '1')
			gameBoard[1] = mark;

		else if(choice == 2 && gameBoard[2] == '2')
			gameBoard[2] = mark;

			else if(choice == 3 && gameBoard[3] == '3')
			gameBoard[3] = mark;

			else if(choice == 4 && gameBoard[4] == '4')
			gameBoard[4] = mark;

			else if(choice == 5 && gameBoard[5] == '5')
			gameBoard[5] = mark;

			else if(choice == 6 && gameBoard[6] == '6')
			gameBoard[6] = mark;

			else if(choice == 7 && gameBoard[7] == '7')
			gameBoard[7] = mark;

			else if(choice == 8 && gameBoard[8] == '8')
			gameBoard[8] = mark;

			else if(choice == 9 && gameBoard[9] == '9')
			gameBoard[9] = mark;

			else {

				printf("That option was Invalid! Your turn is skipped.");
				player--;
				getch();

			}

}

// Function which draws the visual board itself
void boardVisual(){

	printf("\n\n\t Welcome to Tic Tac Toe! \n\n");

	printf("Player1 is (X) - Player2 is (O) \n\n\n");

	printf("    |     |    \n");

	printf("  %c |  %c  | %c  \n",gameBoard[1],gameBoard[2],gameBoard[3]);

	printf("____|_____|____\n");

	printf("    |     |    \n");

	printf(" %c  |  %c  | %c  \n",gameBoard[4],gameBoard[5],gameBoard[6]);

	printf("____|_____|____\n");

	printf("    |     |    \n");

	printf("  %c |  %c  | %c  \n",gameBoard[7],gameBoard[8],gameBoard[9]);

	printf("    |     |    \n");

}
