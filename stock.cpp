#include "stock.h"
using namespace std;

ostream& operator<< (ostream& os, const stock& s)
{
	const int i = 8;
    os << left << setw(i) << setfill(' ') << s.symbol
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
