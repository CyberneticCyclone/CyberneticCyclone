//Hello! this is my terrible job of coding, please, any and all advice or criticism is welcome!
//i tried doing this myself with no other help but looking at the specific syntax for switch/case statements!

#include <iostream>
int main()
{
//turns will be a maximum of 9 turns for a 'full grid'.
//would like to hash out a function to deterimine if a grid slot is filled. 	
	int turn1_input{ 0 };
	int turn2_input{ 0 };
	int turn3_input{ 0 };
	int turn4_input{ 0 };
	int turn5_input{ 0 };
	int turn6_input{ 0 };
	int turn7_input{ 0 };
	int turn8_input{ 0 };
	int turn9_input{ 0 };
	int turnCount{ 0 };

//each user string will list the user inputs, once 3 in a row are made, 'userx' will be declared winner.
//std::list<int>user1input{}; OLD
//std::list<int>user2input{}; OLD
//std::string user_input_1{}; OLD
//std::string user_2_input{}; OLD


//the board slots, to corrispond user input to board slot for 'x' or 'o'.
	
	std::string board[9] = { " ", " ", " ", " ", " ", " ", " ", " ", " " };
	
	bool endGame = false;

	if (turnCount == 9) {
		bool endGame = true;
		return 0;
	}

//shows the users the 3x3 grid and what numbers corrispond to which space.

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

//win condition?

/*if ((board[0]) == (board[1]) && (board[0] == (board[2]) && (board[0]) != " ")) {}
else if((board[3]) == (board[4]) && (board[3]) == (board[5]) && (board[3]) != " ")) {}*/
	
//so far this code will allow you to overwrite an existing opponent symbol. 
//additionally, if someone gets '3 in a row' the game continues and doesnt check for a winner. 
	
//turn 1
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player One (X), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn1_input;
		switch (turn1_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn1_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";

	//turn 2 
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player Two (O), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn2_input;
		switch (turn2_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn2_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";
	
	//turn 3 
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player One (X), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn3_input;
		switch (turn3_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn3_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player Two (O), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	//turn 4
	std::cin >> turn4_input;
		switch (turn4_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn4_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";
	
	//turn 5
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player One (X), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn5_input;
		switch (turn5_input) {
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
		turnCount += 1;
		
	std::cout << "You entered: " << turn5_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";

	//turn 6
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player Two (O), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn6_input;
		switch (turn6_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn6_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";

	//turn 7
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player One (X), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn7_input;
		switch (turn7_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn7_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";

	//turn 8
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player Two (O), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn8_input;
		switch (turn8_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn8_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";

	//turn 9
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "  Player One (X), it's your turn (Enter 1-9)  \n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cin >> turn7_input;
		switch (turn7_input) {
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
		turnCount += 1;

	std::cout << "You entered: " << turn7_input << "\n\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
	std::cout << "_____|_____|_____\n";
	std::cout << "     |     |     \n";
	std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
	std::cout << "     |     |     \n\n";

	return 0;
}