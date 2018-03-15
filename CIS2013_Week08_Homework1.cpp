#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream inn;

void whatLevel(int levelNum);
void gameBoard(char board[10][10]);

int main() {
	int levelNum, xCor, yCor;
	char board[10][10];
	char coOrd[10][10];
	char stay;
	
	cout << "Welcome to Battle Ship" << endl;
	cout << "Choose a level to play by entering the level number" << endl;
	cout << "A 1 indicates a hit and a 0 indicates a miss" << endl;
	cout << "Level 1" << endl;
	cin >> levelNum;

	//selects text file for game board
	whatLevel(levelNum); 

	//Inputs text from file into the program
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			inn >> coOrd[x][y];
		}
	}

	//cout text from file for test
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			cout << coOrd[x][y];
		}
		cout << endl;
	}

	//prints blank board
	gameBoard(board);

	//ask user for coordinates
	cout << "Enter attack coordinate numbers separated by a space: ";
	cin >> xCor >> yCor;

	cout << "   0 1 2 3 4 5 6 7 8 9" << endl;
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
		}
	}
	for (int x = 0; x < 10; x++) {
		cout << " " << x << " ";
		for (int y = 0; y < 10; y++) {
		 {

			}
		}
		cout << endl;
	}
	
	
	cin >> stay;
	return 0;
}

void whatLevel(int levelNum) {
	if (levelNum == 1) {
		inn.open("level_1.txt");
	}
}

void gameBoard(char board[10][10]) {
	for (int x = 0; x<10; x++) {
		for (int y = 0; y<10; y++) {
			board[x][y] = '.';
		}
	}

	cout << "   0 1 2 3 4 5 6 7 8 9" << endl;

	for (int x = 0; x<10; x++) {
		cout << " " << x << " ";
		for (int y = 0; y<10; y++) {
			cout << board[x][y] << " ";
		}
		cout << endl;
	}

}
