#define TAILLEGRID 9
#include <random>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "RandomMap.h"

using namespace std;

RandomMap::RandomMap() 
{

}

RandomMap::~RandomMap()
{

}

int RandomMap::GetRandom(int maxrand) 
{
	//srand(time(nullptr));
	int randomNum;
	randomNum = rand() % maxrand + 0;	
	return randomNum;
}