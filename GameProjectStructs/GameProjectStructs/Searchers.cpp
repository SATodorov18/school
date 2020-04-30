#include <iostream>
#include <string>
#include "structures.h"

using namespace std;

int searchGamesByYear(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, int criteriaYear) {
	int size = 0;

	for (int i = 0; i < gameCount; i++) {
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

int searchGamesByReview(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, string review) {
	int size = 0;

	for (int i = 0; i < gameCount; i++) {
		if (game[i].reviews == review) {
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

int searchGamesByPrice(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, float price) {
	int size = 0;

	for (int i = 0; i < gameCount; i++) {
		if (game[i].price == price) {
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

int searchGamesBySales(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, int sales) {
	int size = 0;

	for (int i = 0; i < gameCount; i++) {
		if (game[i].sales == sales) {
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

int searchGamesByCompany(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, string company) {
	int size = 0;

	for (int i = 0; i < gameCount; i++) {
		if (game[i].company == company) {
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