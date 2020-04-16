#include <iostream>
#include <string>
#include<string.h>
using namespace std;

//****************************
//*********Data layer*********

struct GAMESHOP {
	string nameGame = "";
	float price = 0.000000000;
	int year = 0;
	long long int sales = 0;
	string company = "";
	float gameSize = 0.00000;//in GB
	string reviews = "";
	int gameInd = 0;
};


void addGame(GAMESHOP game[], int& gameCount) {
	cout << "Enter the name of the game: ";
	cin.ignore();
	getline(cin, game[gameCount].nameGame);
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
	cin.ignore();
	getline(cin, game[gameCount].company);
	cout << endl;
	cout << "Enter the size of the game: ";
	cin >> game[gameCount].gameSize;
	cout << endl;
	cout << "Enter the review of the game: ";
	cin.ignore();
	getline(cin, game[gameCount].reviews);
	cout << endl;

	gameCount++;
}


int chooseInd(GAMESHOP* game, int& gameCount, int ind) {
	for (int i = 0; i < gameCount; i++) {
		if (game[i].gameInd == ind) {
			return i;
		}
	}
}

void buyGame(GAMESHOP* game, int& gameCount, int ind) {
	int pos = chooseInd(game, gameCount, ind);
	for (int i = pos; i < gameCount; i++) {
		game[i] = game[i + 1];
	}
	gameCount--;
}

void buyGameIndMenu(GAMESHOP* game, int& gameCount) {
	int ind;
	cout << "Enter the ID of the game which you want to buy" << endl;
	cin >> ind;
	buyGame(game, gameCount, ind);
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

void searchByReviewMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	string criteria;
	cout << "Enter the review you want to search by:";
	cin.ignore();
	getline(cin, criteria);

	int counterOfCrit = searchGamesByReview(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

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

void searchByPriceMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	float criteria;
	cout << "Enter the price you want to search by:";
	cin >> criteria;

	int counterOfCrit = searchGamesByPrice(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

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

void searchBySalesMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	int criteria;
	cout << "Enter the sales you want to search by:";
	cin >> criteria;

	int counterOfCrit = searchGamesBySales(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

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

void searchByCompanyMenu(GAMESHOP* game, int& gameCount) {
	GAMESHOP dataGiven[100];
	string criteria;
	cout << "Enter the company you want to search by:";
	cin.ignore();
	getline(cin, criteria);

	int counterOfCrit = searchGamesByCompany(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}




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

//************************************
//*********Presentation Layer*********

void showGames(GAMESHOP* game, int& gameCount) {
	if (gameCount == 0) {
		cout << "There are no games" << endl;
	}
	for (int i = 0; i < gameCount; i++) {
		cout << "ID of the game: " << i << endl;
		cout << "The name of the game: " << game[i].nameGame << endl;
		cout << "The price of the game: " << game[i].price << endl;
		cout << "The publishing year: " << game[i].year << endl;
		cout << "Copies that were sold: " << game[i].sales << endl;
		cout << "The name of the company creator: " << game[i].company << endl;
		cout << "Size of the game: " << game[i].gameSize << endl;
		cout << "Review of the game: " << game[i].reviews << endl;
		cout << endl;
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



bool mainMenu(GAMESHOP game[], int& gameCount) {
	int choice;
	string exit;
	cout << endl;
	cout << "*******************************" <<endl;
	cout << "*                             *" <<endl;
	cout << "*     Welcome to our Shop     *" << endl;
	cout << "*                             *" << endl;
	cout << "*******************************" << endl;
	cout << "Type, Year, Price, Sales, Company, Size, Review, if you want to search by or edit them";
	cout << "To leave the shop, please type Yes or Y" << endl;
	cout << "1. Add a game" << endl;
	cout << "2. Show all games" << endl;
	cout << "3. Buy a game" << endl;
	cout << "4. Search a game by criteria" << endl;
	cout << "5. Edit a game info" << endl;
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
		buyGameIndMenu(game, gameCount);
		break;
	case 4:
		search(game, gameCount);
		break;
	case 5:
		showGames(game, gameCount);
		editMenu(game, gameCount);
		break;
	case 99:
		cout << "Are you sure???" << endl;
		cin >> exit;
		if (exit == "yes" or exit == "Yes" or exit == "y" or exit == "Y") {
			return false;
		}
		else if(exit=="No" or exit =="no" or exit=="n" or exit=="N"){
			return true;
		}
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