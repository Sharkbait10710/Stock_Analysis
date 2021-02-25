#include "stockList.h"

void stockList::sortStockList() {
	sort(list.begin(), list.end());
	for (unsigned i = 0; i < list.size(); i++) {
		int greatest = i;
		for (int j = i+1; j < list.size(); j++) {
			if (list[greatest] < list[j]) greatest = j;
		}
		indexByGain.push_back(greatest);
	}
}

void stockList::printBySymbol() {
	sort(list.begin(), list.end());
	cout << "printBySymbol\n";
	for (unsigned i = 0; i < list.size(); i++) {
		cout << list[i].getSymbol() << endl;
	}
}

void stockList::printByGain() {
	sortStockList();
	cout << "printByGain\n";
	for (unsigned i = 0; i < list.size(); i++) {
		cout << list[indexByGain[i]].getPerGain() << endl;
	}
}

void stockList::insert(const stock& s) {
	list.push_back(s);
}

