#include "stockList.h"

void stockList::sortStockList() {

}

void stockList::printBySymbol() {

}

void stockList::printByGain() {

}


ostream& operator<< (ostream& os, const stock& s)
{
    os << "Stock Symbol\tToday Open\t" <<
    		"Today Close\tToday High\t Today Low\t" <<
			"Previous Close\tVolume\n" << s.getSymbol() <<
			"\t" << s.getopeningPrice() << "\t" <<
			s.getclosingPrice() << "\t" <<
			s.openingPrice()  << "\t" <<
			s.todayHigh() << "\t" <<
			s.todayLow() << "\t" <<
			s.prevClose() << "\t" <<
			s.volume() << "\t" <<
			s.perGain() << endl;
    return os;
}

ifstream& operator>> (ifstream& inf, stock& s)
{
	string str;
    getline(inf, s.symbol);
    getline(inf, str);
    s.openingPrice(stof(str));
    getline(inf, str);
    s.closingPrice(stof(str));
    getline(inf, str);
    s.todayHigh(stof(str));
    getline(inf, str);
    s.todayLow(stof(str));
    getline(inf, str);
    s.prevClose(stof(str));
    getline(inf, str);
    s.volume(stoi(str));
    return inf;
}
