#include "stockList.h"
//sortStockList() : sorts list by symbol in alphabetical order and make indexByGain
//Arguments: None| Returns: None
void stockList::sortStockList() {
	sort(list.begin(), list.end());
<<<<<<< Updated upstream
	bool arr[list.size()];
	for (unsigned i = 0; i < list.size(); i++) arr[i] = false;
	for (unsigned i = 0; i < list.size(); i++) {
		unsigned greatest = i;
		cout << "i: " << i << endl;
		for (unsigned k = 0; k < i; k++) {
			if (greatest == indexByGain[k]) {
				for (unsigned l = 0; l < list.size(); l++) {
					int flag = true;
					for (unsigned m = 0; m < i; m++) {
						if (l == indexByGain[m]) flag = false;
					}
					if (flag) {
						greatest = l;
					}
				}
			}
		}
	}
=======
	deque<bool>deq;
	    for (unsigned i = 0; i < list.size(); i++) deq.push_back(false);
	    for (unsigned i = 0; i < list.size(); i++)
	    {
	        unsigned greatest;
	        for (unsigned j = 0; j < list.size(); j++) if (deq[j] == false) greatest = j;
	        for (unsigned j = 0; j < list.size(); j++)
	        {
	            if (list[greatest].getPerGain() < list[j].getPerGain() && deq[j] == false)
	                greatest = j;


	        }
	        indexByGain.push_back(greatest);
	        deq[greatest] = true;
	    }
//	bool arr[list.size()];
//	for (unsigned i = 0; i < list.size(); i++) arr[i] = false;
//	for (unsigned i = 0; i < list.size(); i++) {
//		unsigned greatest = i;
//		cout << "i: " << i << endl;
//		for (unsigned k = 0; k < i; k++) {
//			if (greatest == indexByGain[k]) {
//				for (unsigned l = 0; l < list.size(); l++) {
//					int flag = true;
//					for (unsigned m = 0; m < i; m++) {
//						if (l == indexByGain[m]) flag = false;
//					}
//					if (flag) {
//						greatest = l;
//					}
//				}
//			}
//		}
//		unsigned flag = true;
//		for (unsigned j = 0; j < list.size(); j++) {
//			if (list[greatest].getPerGain() < list[j].getPerGain() && arr[j] == false) {
//				greatest = j;
//				flag = false;
//				arr[j] = true;
//				cout << endl;
//			}
//		}
//		if (flag) arr[greatest] = true;
//		cout << "Greatest: " << greatest << endl;
//		for (unsigned j = 0; j < list.size(); j++) cout << arr[j] << ' ';
//		cout << endl;
//		indexByGain.push_back(greatest);
//	}
//	for (unsigned i = 0; i < list.size(); i++) cout << indexByGain[i] << " ";
//	cout << endl;
	//indexByGain.resize(list.size());
	/*for (unsigned i = 0; i < list.size(); i++) {
		unsigned greatest = 0;
		for (unsigned j = 0; j <= list.size(); j++) {
			for (unsigned k = 0; k < i; k++) {
				if (j == indexByGain[k]) j++;
				if (greatest == indexByGain[k]) {
					cout << "Iteration " << i << endl;
					for (unsigned l = 0; l < list.size(); l++) {
						int flag = true;
						for (unsigned m = 0; m < i; m++) {
							if (l == indexByGain[m]) flag = false;
							if (i == 4) cout << "Look: " << l << " " << indexByGain[m] << endl;
						}
						if (flag) {
							greatest = l;
							cout << greatest << " ";
						}
					}
					cout << endl;
				}
			}
			cout << "Greatest Before: " << greatest << " j is: " << j << endl;
			if (list[greatest].getPerGain()
					< list[j].getPerGain() && j < list.size()) greatest = j;
		}
			if (i == 4) cout << "Greatest After: " << greatest << endl;
		indexByGain.push_back(greatest);
		cout << "IndexByGain Iteration " << i << endl;
		for (unsigned j = 0; j < indexByGain.size(); j++) cout << indexByGain[j] << " ";
		cout << endl;
	}*/

>>>>>>> Stashed changes
}


//printBySymbol() : print out the list by symbol in alphabetical order
//Arguments: None | Returns: None
void stockList::printBySymbol() {
	cout << "*********\tDang and Caleb's Portfolio Program\t*********\n"
		<< "*********\t\tFinancial Report\t\t*********\n"
		<< "Stock\tToday\t\tPrevious\t\tPercent\n"
		<< "Symbol\tOpen\tClose\tHigh\tLow\tClose\tGain\tVolume\n"
		<< "------\t----\t-----\t----\t---\t-----\t----\t-----\n";
	for (unsigned i = 0; i < list.size(); i++) {
		cout << list[i];
	}
	cout << endl << "Closing assets: " << stock_sum() << "\n\n";
}

//printByGain() : print out the list by percent gain in numerical order
//Arguments: None | Returns: None
void stockList::printByGain() {
	cout << "*********\t\tGain/Loss\t\t*********\n"
		<< "Stock\tToday\t\tPrevious\t\tPercent\n"
		<< "Symbol\tOpen\tClose\tHigh\tLow\tClose\tGain\tVolume\n"
		<< "------\t----\t-----\t----\t---\t-----\t----\t-----\n";
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
