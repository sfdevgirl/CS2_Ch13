/*
 * Student.hpp
 *
 *  Created on: Sep 26, 2016
 *      Author: shannone_smith
 */

#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include <iostream>
#include <sstream>
#include "Date.hpp"

using namespace std;

class Student {
private:

		int StuId;
		string fName;
		string lName;
		string sSNum;
		char gender;
		int age;
		Date enrollDate;

public:
		void initStudent(void);
		Student();
		virtual ~Student();
		int setStuId(int);
		string setFName(string);
		string setLName(string);
		string setSSNum(string);
		char setGender(char);
		int setAge(int);
		bool setEnroll( int, int, int);
		int getId();
		string getFName();
		string getLName();
		string getSSNum();
		char getGender();
		int getAge();
		int getEnroll( int, int, int);
		Date getEnroll();
      
    




};

#endif /* STUDENT_HPP_ */
