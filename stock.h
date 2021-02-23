
#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
#include <string>
using namespace std;

class stock {
private:
	int price;
	int shares;
	string symbol;
	int highPrice;
	int lowPrice;
	int openingPrice;
	int prevPrice;
	int percentGain;

public:
	stock()
	{
		//Default Constructor
		price = 0;
		shares = 0;
		symbol = "";
		highPrice = 0;
		lowPrice = 0;
		openingPrice = 0;
		prevPrice = 0;
		percentGain = 0;
	}

	stock(int p, int s, std::string sym, int highP, int lowP,
		int openingP, int prevP, int percentG)
	{
		//Overloaded Constructor
		price = p;
		shares = s;
		symbol = sym;
		highPrice = highP;
		lowPrice = lowP;
		openingPrice = openingP;
		prevPrice = prevP;
		percentGain = percentG;
	}

	int getPrice()
		{return price;}
	int getShares()
		{return shares;}
	std::string getSymbol()
		{return string;}
	int getHighPrice()
		{return highPrice;}
	int getLowPrice()
		{return lowPrice;}
	int getOpeningPrice()
		{return openingPrice;}
	int getPrevPrice()
		{return prevPrice;}
	int getPercentGain()
		{return percentGain;}
	void print();

};

#endif /* STOCK_H_ */
