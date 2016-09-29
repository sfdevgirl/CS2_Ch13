/*
 * Date.h
 *
 *  Created on: Sep 26, 2016
 *      Author: shannone_smith
 */

#ifndef DATE_HPP_
#define DATE_HPP_
#include <iostream>
#include <sstream>
using namespace std;

class Date {
private:

	int month;
	int day;
	int year;

public:
	void initVar(void);
	Date();
	virtual ~Date();
	Date(int,int, int);
	bool setMonth(int);
	bool setDay(int);
	bool setYear(int);
	bool setEnroll(int, int, int);
	int getMonth();
	int getDay();
	int getYear();
	void printDate(int, int, int);
    string getConvertYear();
    string getConvertMonth();
    string getConvertDay();
    
    int getString(string, string, string);
    
};

#endif /* DATE_HPP_ */
