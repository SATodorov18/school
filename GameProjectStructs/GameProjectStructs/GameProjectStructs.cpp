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
	cout << "Enter the year you want to search by:";
	cin >> criteria;

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
	cin >> criteria;

	int counterOfCrit = searchGamesByCompany(game, gameCount, dataGiven, criteria);

	cout << "There are " << counterOfCrit << " games that match your criteria";

}


void search(GAMESHOP* game, int& gameCount){
	string criteria;
	cout << "Enter your criteria" << endl;
	cin >> criteria;
	if (criteria == "year" or criteria=="Year"){
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
	cout << "3. Buy a game" << endl;
	cout << "4. Search a game by criteria" << endl;
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