/*
---------------------------------------
               stockList
---------------------------------------
-indexByGain : deque<unsigned>
-list : deque<stock>
---------------------------------------
+stockList()
+ sortStockList() : void
+ insert(const stock&) : void
+ printBySymbol() : void
+ printByGain() : void
+ stock_sum() : float
---------------------------------------
 */
#ifndef STOCKLIST_H_
#define STOCKLIST_H_
#include "stock.h"
using namespace std;
class stockList {
private:
	deque<unsigned> indexByGain;
	deque<stock> list;
public:
	stockList() {};
	void sortStockList();
	void insert(const stock&);
	void printBySymbol();
	void printByGain();
	float stock_sum();
};

#endif /* STOCKLIST_H_ */

