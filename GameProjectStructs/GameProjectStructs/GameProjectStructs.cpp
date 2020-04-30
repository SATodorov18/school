#include <iostream>
#include "structures.h"
#include "editors.h"
#include "searchers.h"
#include <string>
using namespace std;

//*********Data layer*********

void addGame(GAMESHOP* game, int& gameCount, GAMESHOP newGame, int& maxID) {
	newGame.gameInd = maxID;
	game[gameCount] = newGame;
	gameCount++;
	maxID++;
}


int chooseInd(GAMESHOP* game, int& gameCount, int ind) {
	for (int i = 0; i < gameCount; i++) {
		if (game[i].gameInd == ind) {
			return i;
		}
	}
}

void buyGame(GAMESHOP* game, int& gameCount, int ind, int& productCount, BOUGHTGAME* boughtGames) {
	int pos = chooseInd(game, gameCount, ind);
	boughtGames[productCount].nameOfBoughtGame = game[pos].nameGame;
	boughtGames[productCount].priceOfBoughtGame = game[pos].price;
	for (int i = 0; i < gameCount - 1; i++) {
		game[i] = game[i + 1];
	}
	gameCount--;
	productCount++;
}


void buyGameIndMenu(GAMESHOP* game, int& gameCount, int& productCount, BOUGHTGAME* boughtGames) {
	int ind;
	cout << "Enter the ID of the game which you want to buy" << endl;
	cin >> ind;
	buyGame(game, gameCount, ind, productCount, boughtGames);
}


//************************************
//*********Presentation Layer*********

void searchByYearMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	int criteria;
	cout << "Enter the year you want to search by:";
	cin >> criteria;

	int counterOfCrit = searchGamesByYear(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}

void searchByReviewMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	string criteria;
	cout << "Enter the review you want to search by:";
	cin.ignore();
	getline(cin, criteria);

	int counterOfCrit = searchGamesByReview(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}

void searchByPriceMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	float criteria;
	cout << "Enter the price you want to search by:";
	cin >> criteria;

	int counterOfCrit = searchGamesByPrice(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}

void searchBySalesMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	int criteria;
	cout << "Enter the sales you want to search by:";
	cin >> criteria;

	int counterOfCrit = searchGamesBySales(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}

void searchByCompanyMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	string criteria;
	cout << "Enter the company you want to search by:";
	cin.ignore();
	getline(cin, criteria);

	int counterOfCrit = searchGamesByCompany(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}

void addGameMenu(GAMESHOP* game, int& gameCount, int& maxID) {
	GAMESHOP rGame;
	cout << "Enter the name of the game: ";
	cin.ignore();
	getline(cin, rGame.nameGame);
	cout << endl;
	cout << "Enter the price of the game: ";
	cin >> rGame.price;
	cout << endl;
	cout << "Enter the publishing year: ";
	cin >> rGame.year;
	cout << endl;
	cout << "Enter how many copies have been sold: ";
	cin >> rGame.sales;
	cout << endl;
	cout << "Enter the name of the company creator: ";
	cin.ignore();
	getline(cin, rGame.company);
	cout << endl;
	cout << "Enter the size of the game: ";
	cin >> rGame.gameSize;
	cout << endl;
	cout << "Enter the review of the game: ";
	cin.ignore();
	getline(cin, rGame.reviews);
	cout << endl;
	addGame(game, gameCount, rGame, maxID);
}

void showGames(GAMESHOP game) {
	cout << "ID of the game: " << game.gameInd << endl;
	cout << "The name of the game: " << game.nameGame << endl;
	cout << "The price of the game: " << game.price << endl;
	cout << "The publishing year: " << game.year << endl;
	cout << "Copies that were sold: " << game.sales << endl;
	cout << "The name of the company creator: " << game.company << endl;
	cout << "Size of the game: " << game.gameSize << endl;
	cout << "Review of the game: " << game.reviews << endl;
	cout << endl;
}

void showAllGames(GAMESHOP* game, int& gameCount) {
	for (int i = 0; i < gameCount; i++){
		showGames(game[i]);
	}
}


void search(GAMESHOP* game, int& gameCount) {
	string criteria;
	cout << endl;
	cout << "*******************************" << endl;
	cout << "*                             *" << endl;
	cout << "*        Search a game        *" << endl;
	cout << "*                             *" << endl;
	cout << "*******************************" << endl;
	cout << "Enter your criteria" << endl;
	cin >> criteria;
	if (criteria == "year" or criteria == "Year") {
		searchByYearMenu(game, gameCount);
	}
	else if (criteria == "review" or criteria == "Review") {
		searchByReviewMenu(game, gameCount);
	}
	else if (criteria == "price" or criteria == "Price") {
		searchByPriceMenu(game, gameCount);
	}
	else if (criteria == "sales" or criteria == "Sales") {
		searchBySalesMenu(game, gameCount);
	}
	else if (criteria == "company" or criteria == "Company") {
		searchByCompanyMenu(game, gameCount);
	}

}

void editMenu(GAMESHOP* game, int& gameCount) {
	string criteria1;
	cout << endl;
	cout << "*******************************" << endl;
	cout << "*                             *" << endl;
	cout << "*         Edit a game         *" << endl;
	cout << "*                             *" << endl;
	cout << "*******************************" << endl;
	cout << "Enter criteria1 to edit\n";
	cin >> criteria1;
	if (criteria1 == "price" or criteria1 == "Price") {
		editPrice(game, gameCount);
	}
	else if (criteria1 == "year" or criteria1 == "Year") {
		editYear(game, gameCount);
	}
	else if (criteria1 == "review" or criteria1 == "Review") {
		editReview(game, gameCount);
	}
	else if (criteria1 == "sales" or criteria1 == "Sales") {
		editSales(game, gameCount);
	}
	else if (criteria1 == "company" or criteria1 == "Company") {
		editCompany(game, gameCount);
	}
	else if (criteria1 == "size" or criteria1 == "Size") {
		editSize(game, gameCount);
	}

}

void receipt(int& productCount, BOUGHTGAME* boughtGames) {
	float yourMoney = 0.00;
	double totalPrice = 0.0;
	double change = 0.0;
	cout << "|**********************************|" << endl;
	cout << "Products you have bought: " << productCount << endl;
	for (int i = 0; i < productCount; i++) {
		cout << "Name: " << boughtGames[i].nameOfBoughtGame << endl;
		cout << "Price: " << boughtGames[i].priceOfBoughtGame << endl;
		totalPrice += boughtGames[i].priceOfBoughtGame;
	}
	cout << "Total price:" << totalPrice << endl;
	cout << "Pay with money: ";
	while (!(cin >> yourMoney)) {
		cout << "Incorrect input" << endl;
		cin.clear();
		cin.ignore(123, '\n');
		cout << "Try again: ";
	}
	cout << "Money that you have: " << yourMoney << endl;
	change = yourMoney - totalPrice;
	cout << "Your charge is :" << change << endl;
	cout << "|**********************************|" << endl;

}


bool mainMenu(GAMESHOP game[], int& gameCount, int& productCount, BOUGHTGAME* boughtGames, int& maxID) {
	int choice;
	string exit;
	cout << endl;
	cout << "*******************************" << endl;
	cout << "|                             |" << endl;
	cout << "|     Welcome to our Shop     |" << endl;
	cout << "|                             |" << endl;
	cout << "*******************************" << endl;
	cout << "Type, Year, Price, Sales, Company, Size, Review, if you want to search by or edit them" << endl;;
	cout << "To leave the shop, please type Yes or Y" << endl;
	cout << "1. Add a game" << endl;
	cout << "2. Show all games" << endl;
	cout << "3. Buy a game" << endl;
	cout << "4. Search a game by criteria" << endl;
	cout << "5. Edit a game info" << endl;
	cout << "6. Receipt" << endl;
	cout << "7. Leave the shop" << endl;
	cout << "Choose your option: ";
	while (!(cin >> choice) or choice > 7) {
		cout << "Incorrect input" << endl;
		cin.clear();
		cin.ignore(123, '\n');
		cout << "That's not a valid option. Try again: ";
	}
	switch (choice)
	{
	case 1:
		addGameMenu(game, gameCount, maxID);
		break;
	case 2:
		showAllGames(game, gameCount);
		break;
	case 3:
		showAllGames(game, gameCount);
		buyGameIndMenu(game, gameCount, productCount, boughtGames);
		break;
	case 4:
		search(game, gameCount);
		break;
	case 5:
		showAllGames(game, gameCount);
		editMenu(game, gameCount);
		break;
	case 6:
		receipt(productCount, boughtGames);
		break;
	case 7:
		cout << "Are you sure???" << endl;
		cin >> exit;
		if (exit == "yes" or exit == "Yes" or exit == "y" or exit == "Y") {
			return false;
		}
		else if (exit == "No" or exit == "no" or exit == "n" or exit == "N") {
			return true;
		}
	}
	return true;
}

int main()
{
	int gameCount = 0, productCount = 0, maxID = 1;
	GAMESHOP game[100];
	BOUGHTGAME Game[100];
	bool exit = true;
	do {
		exit = mainMenu(game, gameCount, productCount, Game, maxID);
	} while (exit != false);
}