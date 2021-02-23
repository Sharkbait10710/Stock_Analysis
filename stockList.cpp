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
    getline(inf, s.name);
    getline(inf, s.color);
    getline(inf, s.gender);

    return inf;
}
