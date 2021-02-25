//*****************
//Program Name: Program 6: Stock Analysis
//Author: Dang Le & Caleb Clements
//IDE Used: Eclipse & Visual Studios
//Program description: This program aims to help a local stock trading company automate its systems such that
//investors can see how their holdings performed at the end of the day by stock symbol and percent.
//*****************
#include <iostream>
#include <iomanip>
#include "stockList.h"
using namespace std;

void plagiarismReq();
void getData(stockList);
int main() {
    //declarations
    stockList stockList;
    freopen("error.txt", "w", stderr);
    cout << fixed << setprecision(2) << showpoint;

    getData(stockList);        //read external file data into stockList
    stockList.sortStockList(); //sorts stockList and generates indexByGain
    stockList.printBySymbol(); //prints alphabetically by symbol
    stockList.printByGain();   //prints high-to-low low by gain
    plagiarismReq();
    return 0;
}

//plagiarismReq(): Displays required text for plagiarism requirement in this course.
//Arguments: None | Returns: None
void plagiarismReq()
{
    cout << "This is my original work; apart from standard tutoring or class collaboration, "
        << "I neither received help nor copied this code from another source.";
}

//getData(stockList s) : Inputs all documented stocks and their data inside of a stockList
//Arguments: s (stockList) | Returns: None
void getData(stockList s) {
	stock input;
	ifstream inputFile("stockData.txt");
	while(getline(inputFile,input)){
		cin >>
	};
}


