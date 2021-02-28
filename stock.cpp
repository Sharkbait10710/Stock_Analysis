#include "stock.h"
using namespace std;

//setStockInfo() : Sets the stock info for a given stock.
//Arguments: v, s, h, l, o, c, p | Returns: None
void stock::setStockInfo(int v, string s, float h,
float l, float o, float c, float p) 
{
	volume = v; symbol = s; todayHigh = h;
	todayLow = l; openingPrice = o;
	closingPrice = c; prevClose = p;
	perGain = (closingPrice - prevClose) / prevClose * 100;
}

//ostream& operator<<() :Overloads the << operator
//Arguments: ostream& os, const stock& s | Returns: os
ostream& operator<< (ostream& os, const stock& s)
{
	const int i = 8;
    os << left << setw(i) << setfill(' ') << s.symbol
	   << left << setw(i) << setfill(' ') << s.openingPrice
	   << left << setw(i) << setfill(' ') << s.closingPrice
	   << left << setw(i) << setfill(' ') << s.todayHigh
	   << left << setw(i) << setfill(' ') << s.todayLow
	   << left << setw(i) << setfill(' ') << s.prevClose
	   << left << setw(i) << setfill(' ') << s.perGain
	   << left << setw(i) << setfill(' ') << s.volume << endl;
    return os;
}

//ifstream& operator>>() :Overloads the >> operator
//Arguments: ifstream& inf, const stock& s | Returns: inf
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
