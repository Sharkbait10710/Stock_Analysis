/*
 * stockList.h
 *
 *  Created on: Feb 22, 2021
 *      Author: DangL
 */

#ifndef STOCKLIST_H_
#define STOCKLIST_H_
#include "stock.h"
#include <deque>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
class stockList {
	friend ostream& operator<< (ifstream&, stock&);
	friend ifstream& operator>> (ifstream&, stock&);
private:
	deque<stock> indexByGain;
	deque<stock> list;
public:
	stockList() {};
	void sortStockList();
	void printBySymbol();
	void printByGain();
	vector<string> tokenize(string);
};

#endif /* STOCKLIST_H_ */
