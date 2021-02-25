#include "stockList.h"

//sortStockList() : sorts list by symbol in alphabetical order and make indexByGain
//Arguments: None| Returns: None
void stockList::sortStockList() {
	sort(list.begin(), list.end());
	indexByGain.resize(list.size());
	iota(indexByGain.begin(), indexByGain.end(), 0);
	sort(begin(indexByGain), end(indexByGain),
	[&](int i1, int i2) {return list[i1].getPerGain() > list[i2].getPerGain();});

}

//printBySymbol() : print out the list by symbol in alphabetical order
//Arguments: None | Returns: None
void stockList::printBySymbol() {
	sort(list.begin(), list.end());
	cout << "Financial Report\n";
	for (unsigned i = 0; i < list.size(); i++) {
		cout << list[i];
	}
	cout << endl << "Closing assets: " << stock_sum() << "\n\n";
}

//printByGain() : print out the list by percent gain in numerical order
//Arguments: None | Returns: None
void stockList::printByGain() {
	sortStockList();
	cout << "printByGain\n";
	for (unsigned i = 0; i < list.size(); i++) {
		cout << list[indexByGain[i]];
	}
	cout << endl << "Closing assets: " << stock_sum() << "\n\n";
}

//getData(stockList s) : Inputs a stock into stockList
//Arguments: s (stockList) | Returns: None
void stockList::insert(const stock& s) {
	list.push_back(s);
}

float stockList::stock_sum() {
	float sum = 0;
	for (unsigned i = 0; i < list.size(); i++) {
		sum += list[i].getClosingPrice()*list[i].getVolume();
	}
	return sum;
}


