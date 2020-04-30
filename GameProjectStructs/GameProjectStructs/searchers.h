#pragma once
#include <string>
#include "structures.h"

int searchGamesByYear(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, int criteriaYear);
int searchGamesByReview(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, string review);
int searchGamesByPrice(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, float price);
int searchGamesBySales(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, int sales);
int searchGamesByCompany(GAMESHOP* game, int& gameCount, GAMESHOP* gameRes, string company);