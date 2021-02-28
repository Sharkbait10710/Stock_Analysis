/*
---------------------------------------
               stock
---------------------------------------
- volume : int
- symbol : string
- todayHigh : float
- todayLow : float
- openingPrice : float
- closingPrice : float
- prevClose : float
- perGain : float
---------------------------------------
<<friend>> operator<<(ostream&, const stock&) :  ostream&
<<friend>> operator>>(ifstream& , stock&) : ifstream&
---------------------------------------
+stock()
+stock(int, string, float, float, float, float, float)
+setStockInfo(int, string, float,float, float, float, float) : void
+getVolume() const : int
+getSymbol() const : string
+getTodayHigh() const : float
+getTodayLow() const : float
+getOpeningPrice() const : float
+getClosingPrice() const : float
+getPerGain() const : float
+setVolume(int) : void
+setSymbol(string) : void
+setTodayHigh(float) : void
+setTodayLow(float) : void
+setOpeningPrice(float) : void
+setClosingPrice(float) : void
+setPerGain(float) : void
+operator<(stock&) : bool
---------------------------------------
 */
#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
#include <fstream>
#include <deque>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

class stock {
friend ostream& operator<< (ostream&, const stock&);
friend ifstream& operator>> (ifstream&, stock&);
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
		volume = 0;
		symbol = "";
		todayHigh = 0.0;
		todayLow = 0.0;
		openingPrice = 0.0;
		closingPrice = 0.0;
		prevClose = 0.0;
		perGain = 0.0;
	}

	//Overloaded Constructor
	stock(int volume, string symbol, float highPrice, float lowPrice,
		float openingPrice, float closingPrice, float prevClose)
	{setStockInfo(volume, symbol, highPrice, lowPrice,
			openingPrice, closingPrice, prevClose);}

	//All setters in one function per project specs.
	void setStockInfo(int, string, float, float, float, float, float);
	int getVolume() {return volume;}
	string getSymbol() {return symbol;}
	float getTodayHigh() {return todayHigh;}
	float getTodayLow() {return todayLow;}
	float getOpeningPrice() {return openingPrice;}
	float getClosingPrice() {return closingPrice;}
	float getPrevClose() {return prevClose;}
	float getPerGain() {return perGain;}
	bool operator< (const stock &other) const {
	        return symbol < other.symbol;
	    }
};

#endif /* STOCK_H_ */
