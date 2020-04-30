#pragma once

using namespace std;

struct GAMESHOP {
	string nameGame = "";
	float price = 0.000000000;
	int year = 0;
	long long int sales = 0;
	string company = "";
	float gameSize = 0.00000;//in GB
	string reviews = "";
	string boughtGame = "";
	float boughtPrice = 0.0000;
	int gameInd = 0;
};

struct BOUGHTGAME {
	string nameOfBoughtGame = "";
	float priceOfBoughtGame = 0.000000000;
};
