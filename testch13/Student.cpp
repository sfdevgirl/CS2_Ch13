/*
 * Student.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: shannone_smith
 */

#include "Student.hpp"
#include "Date.hpp"
#include "utilitiesClass.hpp"
#include <iostream>

#include <sstream>
using namespace std;

//void Student::initStudent(void){
//			int StuId = 0;
//			char gender= ' ';
//			int age= 0;
//
//}

Student::Student() {
	// TODO Auto-generated constructor stub
//	initStudent();
}

Student::~Student() {
	// TODO Auto-generated destructor stub
    cout << "You are deleting me! " << lName << ", " << fName << endl;
    
}

int Student::setStuId(int newId){

		StuId = newId;
		return StuId;

}
//setid

string Student::setFName(string newFirstName){
	fName = newFirstName;
	return fName;
}//setfname
//
string Student::setLName(string newLastName){
	lName = newLastName;
	return lName;
}
string Student::setSSNum(string newSSNum){
	sSNum = newSSNum;
	return sSNum;
}//setssnum
char Student::setGender(char newGender){
	gender = newGender;
	return gender;
}//setgender
int Student::setAge(int newAge){
	age = newAge;
	return age;
}//set age
bool Student::setEnroll(int month, int day, int year){
    bool isTrue;
    Date temp;
    if(!temp.setMonth(month)){
          isTrue = false;
    }//if
    else if(!temp.setDay(day)){
          isTrue = false;
    }//if
    else if(!temp.setYear(year)){
          isTrue = false;
    }//if
    else{
          isTrue =  true;
          enrollDate = temp;
    }//else
    return isTrue;
}//setenroll
int Student::getId(){

	    return StuId;
}//getid
string Student::getFName(){

	    return fName;
}//getfname
string Student::getLName(){

	 return lName;
}//getssnum
string Student::getSSNum(){

	 return sSNum;
}//getssnum
char Student::getGender(){

	return gender;
}//getgender
int Student::getAge(){

	return age;
}//getage
Date Student::getEnroll(){
	return enrollDate;
}//getenroll



