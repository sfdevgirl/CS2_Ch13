/*
 * Date.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: shannone_smith
 */

#include "Date.hpp"



Date::Date() {
	// TODO Auto-generated constructor stub
	
}

Date::Date(int aMonth, int aDay, int aYear){
	
	setDay(day);
	setMonth(month);
	setYear(year);
	}

Date::~Date() {
	// TODO Auto-generated destructor stub
}
bool Date::setMonth(int newMonth){
	bool isTrue;
	if(newMonth >= 1 && newMonth <= 12){
	    month = newMonth;
	    isTrue = true;
	 }//if
	 else{
	       isTrue = false;
	     }//else
	return isTrue;

}//setmonth
bool Date::setDay(int newDay){
	bool isTrue;
		if(newDay >= 1 && newDay <= 31){
		    day = newDay;
		    isTrue = true;
		 }//if
		 else{
		       isTrue = false;
		     }//else
		return isTrue;
}//setdate
bool Date::setYear(int newYear){
	bool isTrue;
	if(newYear >= 1990 && newYear <= 2020){
	    year = newYear;
	    isTrue = true;
	}//if
	else{
		 isTrue = false;
		}//else
		return isTrue;
}//setyear


int Date::getMonth(){
	return month;
}//getmonth
int Date::getDay(){
	return day;
}//getday
int Date::getYear(){
	return year;
}//getyear
void Date::printDate(int, int, int){
	cout << month << "/" << day << "/" << year <<endl;
}//printdate

string Date::getConvertYear(){
    ostringstream convert;
    string yearString;
    int year;
    
    year = getYear();
    convert << year;
    yearString = convert.str();
    return yearString;
}

string Date::getConvertMonth(){
    ostringstream convert;
    string monthString;
    int month;
    
    month = getMonth();
    convert << month;
    monthString = convert.str();
    return monthString;
}
string Date::getConvertDay(){
    string dayString;
    int day;
    ostringstream convert;
    
    day = getDay();
    convert << day;
    dayString = convert.str();
    
    return dayString;
}


string Date::getString(string monthString, string dayString, string yearString){
    string date;
    date = monthString + "/" + dayString + "/" + yearString;
    return date;
}
