/*
 * stock.cpp
 *
 *  Created on: Feb 22, 2021
 *      Author: DangL
 */

#include "stock.h"

using namespace std;

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

ostream& operator<< (ostream& os, stock& s)
{
    os << "Stock Symbol\tOpening Price\t" <<
    		"Closing Price\tToday High\t Today Low\t" <<
			"Previous Close\tVolume\n" << s.getSymbol() <<
			"\t" << s.getOpeningPrice() << "\t" <<
			s.getClosingPrice() << "\t" <<
			s.getOpeningPrice()  << "\t" <<
			s.getTodayHigh() << "\t" <<
			s.getTodayLow() << "\t" <<
			s.getPrevClose() << "\t" <<
			s.getVolume() << "\t" <<
			s.getPerGain() << endl;
    return os;
}

ifstream& operator>> (ifstream& inf, stock& s)
{
	inf >> s.symbol >> s.openingPrice >> s.todayHigh >>
		s.todayLow >> s.prevClose >> s.volume;
    return inf;
}
