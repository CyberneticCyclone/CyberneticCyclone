#include <iostream>
#include <string>
/*wow! its been a long day. ive gotten alot done and cant believe it!
i still would like to impliment a condition to check if a position is taken already,
that will be my next function or loop added*/ 

//global variables for 'Game State'
std::string board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int input1 = { 0 };
int input2 = { 0 };
bool winner = false;

void introduction(){
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "~~~~~ Welcome to the Tic Tac Toe Console ~~~~~\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "This game is meant to be played by two players\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\n\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~ This is the 3 x 3 grid: ~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~    1  |  2  |  3    ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~  _____|_____|_____  ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~    4  |  5  |  6    ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~  _____|_____|_____  ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~    7  |  8  |  9    ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}
//the 3x3 tic tac toe board 
void printBoard(std::string x){
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~    " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "    ~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~  _____|_____|_____  ~~~~~~~~~~~~\n"; 
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~    " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "    ~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~  _____|_____|_____  ~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~    " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "    ~~~~~~~~~~~~\n";
	std::cout << "~~~~~~~~~~~~       |     |       ~~~~~~~~~~~~\n\n";
}
//player 1's turn
void p1Turn(){
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player One (X), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cin >> input1;
	switch (input1) {
	case 1:
		board[0] = 'X';
		break;
	case 2:
		board[1] = 'X';
		break;
	case 3:
		board[2] = 'X';
		break;
	case 4:
		board[3] = 'X';
		break;
	case 5:
		board[4] = 'X';
		break;
	case 6:
		board[5] = 'X';
		break;
	case 7:
		board[6] = 'X';
		break;
	case 8:
		board[7] = 'X';
		break;
	case 9:
		board[8] = 'X';
		break;
	}
}
//player 2's turn
void p2Turn(){
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player Two (O), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cin >> input2;
	switch (input2) {
	case 1:
		board[0] = 'O';
		break;
	case 2:
		board[1] = 'O';
		break;
	case 3:
		board[2] = 'O';
		break;
	case 4:
		board[3] = 'O';
		break;
	case 5:
		board[4] = 'O';
		break;
	case 6:
		board[5] = 'O';
		break;
	case 7:
		board[6] = 'O';
		break;
	case 8:
		board[7] = 'O';
		break;
	case 9:
		board[8] = 'O';
		break;
	}
}

void winCondition(std::string x){
	//function is false on function start, and will check the board to see if winner is present
	winner = false;
	//Horizontal winning combinations
	if (board[0] == board[1] && board[0] == board[2] && board[0] != ' ') {
		winner = true;
	}
	else if (board[3] == board[4] && board[3] == board[5] && board[3] != ' ') {
		winner = true;
	}
	else if (board[6] == board[7] && board[6] == board[8] && board[6] != ' ') {
		winner = true;
	}
	//Vertical winning combinations
	else if (board[0] == board[3] && board[0] == board[6] && board[0] != ' ') {
		winner = true;
	}
	else if (board[1] == board[4] && board[1] == board[7] && board[1] != ' ') {
		winner = true;
	}
	else if (board[2] == board[5] && board[2] == board[8] && board[2] != ' ') {
		winner = true;
	}
	//Diagonal winning combinations
	else if (board[0] == board[4] && board[0] == board[8] && board[0] != ' ') {
		winner = true;
	}
	else if (board[2] == board[4] && board[2] == board[6] && board[2] != ' ') {
		winner = true;		
	}
}

int main(){
	introduction();
	int turnCounter =  0;
	while (turnCounter < 9){	
		//the first 'if' is the winning game state, will stop executing lines of code upon a true condition
		if (winner == true){
			std::cout << "Thats 3 in a row!\n";
			return 0;
		}
		//this 'if/else' alternates the player turn functions
		if (turnCounter % 2 == 0){
			p1Turn();
		}
		else{
			p2Turn();
		}
		//after each turn, these functions are executed/checked
		turnCounter++;
		printBoard(board);
		winCondition(board);
	}
	return 0;
}