#include "stockList.h"
//sortStockList() : sorts list by symbol in alphabetical order and make indexByGain
//Arguments: None| Returns: None
void stockList::sortStockList() {
	sort(list.begin(), list.end());
	deque<bool>deq;
	for (unsigned i = 0; i < list.size(); i++) deq.push_back(false);
	for (unsigned i = 0; i < list.size(); i++) {
		unsigned greatest;
		for (unsigned j = 0; j < list.size(); j++) if (deq[j] == false) greatest = j;
		for (unsigned j = 0; j < list.size(); j++) {
			if (list[greatest].getPerGain() < list[j].getPerGain() && deq[j] == false)
				greatest = j;
		}
		indexByGain.push_back(greatest);
		deq[greatest] = true;
	}
}


//printBySymbol() : print out the list by symbol in alphabetical order
//Arguments: None | Returns: None
void stockList::printBySymbol() {
	cout << "*********\tDang and Caleb's Portfolio Program\t*********\n"
		<< "*********\t\tFinancial Report\t\t*********\n"
		<< "Stock\tToday\t\tPrevious\t\tPercent\n"
		<< "Symbol\tOpen\tClose\tHigh\tLow\tClose\tGain\tVolume\n"
		<< "------\t----\t-----\t----\t---\t-----\t----\t-----\n";
	for (unsigned i = 0; i < list.size(); i++)
		cout << list[i];
	cout << endl << "Closing assets: " << stock_sum() << "\n\n";
}

//printByGain() : print out the list by percent gain in numerical order
//Arguments: None | Returns: None
void stockList::printByGain() {
	cout << "*********\t\tGain/Loss\t\t*********\n"
		<< "Stock\tToday\t\tPrevious\t\tPercent\n"
		<< "Symbol\tOpen\tClose\tHigh\tLow\tClose\tGain\tVolume\n"
		<< "------\t----\t-----\t----\t---\t-----\t----\t-----\n";
	for (unsigned i = 0; i < list.size(); i++)
		cout << list[indexByGain[i]];
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
