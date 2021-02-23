#include "stockList.h"

void stockList::sortStockList() {

}

void stockList::printBySymbol() {

}

void stockList::printByGain() {

}

vector<string> stockList::tokenize(string line) {

	vector<string> data;
	unsigned counter = 0;
	for (unsigned i = 0; i < line.size(); i++) {
		if (line[i] == ' ') {
			string container = "";
			for (unsigned j = counter; j < i; j++) {
				container += line[j];
			}
			if (!container.empty())data.push_back(container);
			counter = i + 1;
		}
		if (i == line.size() - 1 && counter != i) {
			string container = "";
			for (unsigned j = counter; j <= i; j++) {
				container += line[j];
			}
			if (!container.empty())data.push_back(container);
		}
	}
	return data;
}

ostream& operator<< (ostream& os, const stock& s)
{
    os << s.name << " (" << s.gender
       << ") [" << s.color << "]" << endl;
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
    s.volume(stof(str));

    return inf;
}
