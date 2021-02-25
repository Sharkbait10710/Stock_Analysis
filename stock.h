
#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
#include <string>

using namespace std;

class stock {
private:
	int volume;
	string symbol;
	float todayHigh;
	float todayLow;
	float openingPrice;
	float closingPrice;
	float prevClose;
	float perGain;

public:
	stock()
	{
		//Default Constructor
		volume = 0.0;
		symbol = "";
		todayHigh = 0.0;
		todayLow = 0.0;
		openingPrice = 0.0;
		closingPrice = 0.0;
		prevClose = 0.0;
		perGain = 0.0;
	}

	stock(int volume, string symbol, float highPrice, float lowPrice,
		float openingPrice, float closingPrice, float prevClose) //Overloaded constructor
	{setStockInfo(volume, symbol, highPrice, lowPrice, openingPrice, closingPrice, prevClose)}

	void setStockInfo();
	int getVolume() {return volume;}
	string getSymbol() {return symbol;}
	float getTodayHigh() {return todayHigh;}
	float getTodayLow() {return todayLow;}
	float getOpeningPrice() {return openingPrice;}
	float getClosingPrice() {return closingPrice;}
	float getPrevClose() {return prevClose;}
	float getPerGain() {return perGain;}
	void print();


};

#endif /* STOCK_H_ */
