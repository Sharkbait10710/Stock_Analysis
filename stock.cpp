/*
 * stock.cpp
 *
 *  Created on: Feb 22, 2021
 *      Author: DangL
 */

#include "stock.h"
#include <array>
using namespace std;


void setStockInfo(int v, string s, float h, float l, float o, float c, float p) {
	volume = v; symbol = s; todayHigh = h; todayLow = l; openingPrice = o; closingPrice = c; prevClose = p;
	perGain = (closingPrice - prevClose) / prevClose * 100;
}

ostream& operator<< (ostream& os, const stock& s)
{
	const int i = 19;
    os << left << setw(i) << setfill(' ') << "Stock Symbol"
       << left << setw(i) << setfill(' ') << "Opening Price"
	   << left << setw(i) << setfill(' ') << "Closing Price"
	   << left << setw(i) << setfill(' ') <<"Today High"
	   << left << setw(i) << setfill(' ') <<"Today Low"
	   << left << setw(i) << setfill(' ') << "Previous Close"
	   << left << setw(i) << setfill(' ') << "Volume"
	   << left << setw(i) << setfill(' ') <<"Percent Gain\n"
	   << left << setw(i) << setfill(' ') << s.symbol
	   << left << setw(i) << setfill(' ') << s.openingPrice
	   << left << setw(i) << setfill(' ') << s.closingPrice
	   << left << setw(i) << setfill(' ') << s.todayHigh
	   << left << setw(i) << setfill(' ') << s.todayLow
	   << left << setw(i) << setfill(' ') << s.prevClose
	   << left << setw(i) << setfill(' ') << s.volume
	   << left << setw(i) << setfill(' ') << s.perGain << endl;
    return os;
}

ifstream& operator>> (ifstream& inf, stock& s)
{
	inf >> s.symbol; string str; inf >> str;
	s.openingPrice = stof(str);
	inf >> str; s.closingPrice = stof(str);
	inf >> str; s.todayHigh = stof(str);
	inf >> str; s.todayLow = stof(str);
	inf >> str; s.prevClose = stof(str);
	inf >> str; s.volume = stoi(str);
	s.perGain = (s.closingPrice - s.prevClose) / s.prevClose *100;
	return inf;
}
