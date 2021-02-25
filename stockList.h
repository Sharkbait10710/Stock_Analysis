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
private:
	deque<int> indexByGain;
	deque<stock> list;
public:
	stockList() {};
	void sortStockList();
	void insert(const stock&);
	void printBySymbol();
	void printByGain();
};

#endif /* STOCKLIST_H_ */
