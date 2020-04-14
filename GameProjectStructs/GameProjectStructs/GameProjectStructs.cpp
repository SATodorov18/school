#include <iostream>
#include <string>

using namespace std;

struct GAMESHOP {
	string nameGame = "";
	float price = 0.000000000;
	int year = 0;
	int sales = 0;
	string company = "";
	float gameSize = 0.00000;
	string reviews = "";
	int gameInd = 0;
};


void addGame(GAMESHOP game[], int& gameCount) {
	cout << "Enter the name of the game: ";
	cin >> game[gameCount].nameGame;
	cout << endl;
	cout << "Enter the price of the game: ";
	cin >> game[gameCount].price;
	cout << endl;
	cout << "Enter the publishing year: ";
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

void showGames(GAMESHOP* game, int& gameCount) {
	if (gameCount == 0) {
		cout << "There are no games"<<endl;
	}
	for (int i = 0; i < gameCount; i++){
		cout <<"ID of the game: "<<i<<endl;
		cout <<"The name of the game: "<< game[i].nameGame << endl;
		cout <<"The price of the game: "<< game[i].price << endl;
		cout <<"The publishing year: "<< game[i].year << endl;
		cout <<"Copies that were sold :"<<game[i].sales << endl;
		cout <<"The name of the company creator :"<< game[i].company << endl;
		cout <<"Size of the game: "<< game[i].gameSize << endl;
		cout <<"Review of the game: "<< game[i].reviews << endl;
		cout << endl;
	}
}

int chooseInd(GAMESHOP* game, int& gameCount, int ind) {
	for (int i = 0; i < gameCount; i++) {
		if (game[i].gameInd == ind) {
			return i;
		}
	}
	return -1;
}

void removeGame(GAMESHOP* game, int& gameCount, int ind) {
	int pos = chooseInd(game, gameCount, ind);
	for (int i = pos; i < gameCount - 1; i++) {
		game[i] = game[i + 1];
	}
	gameCount--;
}

void removeGameIndMenu(GAMESHOP* game, int& gameCount) {
	int ind;
	cout << "Enter the position of the game you want to delete" << endl;
	cin >> ind;
	removeGame(game, gameCount, ind);
}

int searchGamesByYear(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, int criteriaYear) {
	int size = 0;

	for (int i = 0; i < gameCount; i++){
		if (game[i].year == criteriaYear) {
			gameRes[size++] = game[i];
			cout << endl;
			cout << "*******************************" << endl;
			cout << "ID of the game: " << i << endl;
			cout << "The name of the game: " << game[i].nameGame << endl;
			cout << "The price of the game: " << game[i].price << endl;
			cout << "The publishing year: " << game[i].year << endl;
			cout << "Copies that were sold :" << game[i].sales << endl;
			cout << "The name of the company creator :" << game[i].company << endl;
			cout << "Size of the game: " << game[i].gameSize << endl;
			cout << "Review of the game: " << game[i].reviews << endl;
			cout << "*******************************" << endl;
			cout << endl;
		}
	}
	return size;
}

void searchByYearMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	int criteria;
	cout << "Enter the year you want to search by:";
	cin >> criteria;
	
	int counterOfCrit = searchGamesByYear(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}

bool mainMenu(GAMESHOP game[], int& gameCount) {
	cout << endl;
	cout << "*******************************" <<endl;
	cout << "*                             *" <<endl;
	cout << "*     Welcome to our Shop     *" << endl;
	cout << "*                             *" << endl;
	cout << "*******************************" << endl;
	int choice;
	cout << "1. Add a game" << endl;
	cout << "2. Show all games" << endl;
	cout << "3. Remove a game" << endl;
	cout << "4. Edit a game" << endl;
	cout << "5. Search a game by criteria" << endl;
	cout << "99. Leave the shop" << endl;
	cout << "Choose your option: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		addGame(game, gameCount);
		break;
	case 2:
		showGames(game, gameCount);
		break;
	case 3:
		showGames(game, gameCount);
		removeGameIndMenu(game, gameCount);
		break;
	case 5:
		searchByYearMenu(game, gameCount);
		break;
	case 99:
		return false;
	}
	return true;
}

int main()
{
	int gameCount = 0;
	GAMESHOP game[100];
	bool exit = true;
	do{
		exit = mainMenu(game, gameCount);
	} while (exit!=false);


}