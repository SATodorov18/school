#include <iostream>
using namespace std;

struct GAMESHOP {
	string nameGame = "";
	float price = 0.000000000;
	int year = 0;
	int sales = 0;
	string company = "";
	int gameSize = 0;
	string reviews = "";
	int gameCount = 0;
};

void addGame(GAMESHOP game[], int& gameCount) {
	cout << "Enter the name of game: ";
	cin >> game[gameCount].nameGame;
	cout << endl;
	cout << "Enter the price of the game: ";
	cin >> game[gameCount].price;
	cout << endl;
	cout << "Enter the publish year: ";
	cin >> game[gameCount].year;
	cout << endl;
	cout << "Enter how many copies have been sold: ";
	cin >> game[gameCount].sales;
	cout << endl;
	cout << "Enter the name of the company creator: ";
	cin >> game[gameCount].company;
	cout << endl;
	cout << "Enter the size of the game: ";
	cin >> game[gameCount].gameSize;
	cout << endl;
	cout << "Enter the review of the game: ";
	cin >> game[gameCount].reviews;
	cout << endl;

	gameCount++;
}


//******************************


//***************PresentationLayer***************

//Code

//******************************

int main() {

}