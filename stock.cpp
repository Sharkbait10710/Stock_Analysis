/*
 * stock.cpp
 *
 *  Created on: Feb 22, 2021
 *      Author: DangL
 */

#include "stock.h"

using namespace std;

void print()
{

}

void setStockInfo(int v, string sym, float highP, float lowP, float openingP,
	float closingP, float prevP) //Required function to set all of the stock data.
{
	volume = v;
	symbol = sym;
	todayHigh = highP;
	todayLow = lowP;
	openingPrice = openingP;
	closingPrice = closingP;
	prevClose = prevP;
}
