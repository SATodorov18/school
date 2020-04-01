#include <iostream>
using namespace std;

struct GAMESHOP {
	string nameGame = "";
	float price;
	int year;
	int sales;
	string company = "";
	int gameSize;
	string reviews = "";
	int gameCount = 0;
};

void createGame(GAMESHOP game[], int& gameCount) {
	cout << "Enter the name of game:";
	cin >> game[gameCount].nameGame << endl;
	cout << "Enter the price of the game:";
	cin >> game[gameCount].price << endl;
	cout << "Enter the publish year:";
	cin >> game[gameCount].year << endl;
	cout << "Enter how many copies have been sold:";
	cin >> game[gameCount].sales << endl;
	cout << "Enter the name of the company creator:";
	cin >> game[gameCount].company << endl;
	cout << "Enter the size of the game:";
	cin >> game[gameCount].gameSize << endl;
	cout << "Enter the review of the game" << endl;
	cin >> game[gameCount].reviews;

}

int main() {
	
}