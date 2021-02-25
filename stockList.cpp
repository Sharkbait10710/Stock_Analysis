#include "stockList.h"

void stockList::sortStockList() {

}

void stockList::printBySymbol() {

}

void stockList::printByGain() {

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
