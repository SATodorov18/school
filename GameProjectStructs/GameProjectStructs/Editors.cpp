#include <iostream>
#include <string>
#include "structures.h"

using namespace std;

void editPrice(GAMESHOP* game, int& gameCount) {
	int ID;
	float newPrice;

	cout << "Enter an ID: ";
	cin >> ID;
	cout << "Enter the new price: ";
	cin >> newPrice;

	game[ID].price = newPrice;
}

void editYear(GAMESHOP* game, int& gameCount) {
	int ID;
	int newYear;

	cout << "Enter an ID: ";
	cin >> ID;
	cout << "Enter the new year: ";
	cin >> newYear;

	game[ID].year = newYear;
}

void editCompany(GAMESHOP* game, int& gameCount) {
	int ID;
	string newCompany;

	cout << "Enter an ID: ";
	cin >> ID;
	cout << "Enter the new name of the company: ";
	cin.ignore();
	getline(cin, newCompany);

	game[ID].company = newCompany;
}

void editName(GAMESHOP* game, int& gameCount) {
	int ID;
	string newName;

	cout << "Enter an ID: ";
	cin >> ID;
	cout << "Enter the new name: ";
	cin.ignore();
	getline(cin, newName);

	game[ID].nameGame = newName;
}

void editSize(GAMESHOP* game, int& gameCount) {
	int ID;
	float newSize;

	cout << "Enter an ID: ";
	cin >> ID;
	cout << "Enter the new size: ";
	cin >> newSize;

	game[ID].gameSize = newSize;
}

void editSales(GAMESHOP* game, int& gameCount) {
	int ID;
	int newSales;

	cout << "Enter an ID: ";
	cin >> ID;
	cout << "Enter the new sales: ";
	cin >> newSales;

	game[ID].sales = newSales;
}

void editReview(GAMESHOP* game, int& gameCount) {
	int ID;
	string newReview;

	cout << "Enter an ID: ";
	cin >> ID;
	cout << "Enter the new review: ";
	cin.ignore();
	getline(cin, newReview);

	game[ID].reviews = newReview;
}
