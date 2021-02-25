
#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
#include <string>

using namespace std;

class stock {
private:
	float price;
	int volume;
	string symbol;
	float todayHigh;
	float todayLow;
	float openingPrice;
	float closingPrice;
	float prevClose;
	int perGain;

public:
	stock()
	{
		//Default Constructor
		price = 0;
		volume = 0;
		symbol = "";
		todayHigh = 0;
		todayLow = 0;
		openingPrice = 0;
		closingPrice = 0;
		prevClose = 0;
		perGain = 0;
	}

	stock(float p, int v, string sym, float highP, float lowP,
		float openingP,float closingP, float prevP)
	{
		//Overloaded Constructor
		price = p;
		volume = v;
		symbol = sym;
		todayHigh = highP;
		todayLow = lowP;
		openingPrice = openingP;
		closingPrice = closingP;
		prevClose = prevP;
	}

	float getPrice()
		{return price;}
	int getVolume()
		{return volume;}
	string getSymbol()
		{return symbol;}
	float getTodayHigh()
		{return todayHigh;}
	float getTodayLow()
		{return todayLow;}
	float getOpeningPrice()
		{return openingPrice;}
	float getClosingPrice()
		{return closingPrice;}
	float getPrevClose()
		{return prevClose;}
	float getPerGain()
		{return perGain;}
	void print();

};

#endif /* STOCK_H_ */
