

//============================================================================
// Name        : chapter13_project.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//*****************

//Project Name: Chapter/Question or Project-Name

//Project Description: A description of the project/program

//Project Author: last name, first name

//Is this an extra credit Project:  Yes/No

//Date completed: mm/dd/yyyy

//Operating system used: Windows or OSx or Linux

//IDE Used:  Eclipse or Code::Blocks or xCode or CodeRunner
#include "utilitiesClass.hpp"
#include "Student.hpp"
#include "Date.hpp"
#include "UtilitiesClass.hpp"
#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
void printHeader();

int main() {
    int totalStudents = 0;
    int studentID = 0;
    string fName;
    string lName;
    string sSNum;
    int age;
    char gender;
    const int i_MAX_ID = 90000000;
    const int i_MIN_INPUT_LENGTH = 0;
    const int i_MAX_FIRST_NAME = 12;
    const int i_MAX_LAST_NAME = 20;
    const int i_MAX_SOCIAL = 11;
    char male = 'M';
    char female = 'F';
    int max_age = 100;
    int min_age = 1;
    int breakOut = 0;
    int month = 0;
    int day = 0;
    int year = 0;
    int max_month = 12;
    int max_day = 31;
    int max_year = 2020;
   
    
    cout << "Welcome to my Student Management Program" <<endl;
    cout << "========================================" <<endl;
    
    UtilitiesClass myUClass;
    
    
    totalStudents = myUClass.inputInt("Please enter the number of students you wish to input (0 to end)", 1, 100, 0);
    if(totalStudents != 0){
        //allocate
        Student *aStudent = new Student[totalStudents];
        
        for (int i= 0; i < totalStudents; i++){
            cout << "Data Input for Student #" << i << endl;
            studentID = myUClass.inputInt("Enter the ID for the student", i_MIN_INPUT_LENGTH , i_MAX_ID, breakOut);
            aStudent[i].setStuId(studentID);
            //ID
            fName = myUClass.inputString("Please enter the student's first name: ", i_MIN_INPUT_LENGTH, i_MAX_FIRST_NAME);
            aStudent[i].setFName(fName);
            //first
            lName = myUClass.inputString("PLease enter the student's last name: ", i_MIN_INPUT_LENGTH, i_MAX_LAST_NAME);
            aStudent[i].setLName(lName);
            //last
            sSNum = myUClass.inputString("Enter the SSN for the student (999-99-9999): ", i_MIN_INPUT_LENGTH, i_MAX_SOCIAL);
            aStudent[i].setSSNum(sSNum);
            //SS
            gender = myUClass.inputChar("Enter the Gender (M or F) for the student", male, female );
            aStudent[i].setGender(gender);
            //gender
            age = myUClass.inputInt("Enter the age of the student: ", min_age, max_age, breakOut);
            aStudent[i].setAge(age);
            //age
            cout << "Enrollment Date Input\n";
            
            
                month = myUClass.inputInt("Enter the Student's Enrollment Month", i_MIN_INPUT_LENGTH, max_month, breakOut);
                aStudent[i].getEnroll().getMonth();
                //month
                
            
            day = myUClass.inputInt("Enter the Student's Enrollment day", i_MIN_INPUT_LENGTH, max_day, breakOut );
            aStudent[i].getEnroll().getDay();
            //day
           
          
            year = myUClass.inputInt("Enter the Student's Enrollment Year", i_MIN_INPUT_LENGTH, max_year, breakOut );
            aStudent[i].getEnroll().getYear();
            //year
           
            
            //user year striing = student[i].convertmonth
            //setenroll = student[i].enrolldate(convert.month/day/year)
            
            
        }//for
        
        printHeader();
        
        for (int i=0; i < totalStudents; i++){
            cout << setw(8) << aStudent[i].getId() << setw(10) <<
            aStudent[i].getLName() << ", " <<
            aStudent[i].getFName() << setw(5)
            << aStudent[i].getAge() << endl;
            
        }
        
        delete[] aStudent;
    }//if
    else{}
    cout << "\n!!!Goodbye World!!!" << endl; // end
    return 0;
}

void printHeader(){
    cout << setw(10) << "Student Details Report" << endl;
    cout << setw(8) << "======================" <<endl;
    cout << setw(8) << "Student ID" << setw(15) << "Student Name" << setw(5)  << "Age" << endl;
    cout << setw(8) << "----------" << setw(15) << "------------------" << setw(5)  << "---" << endl;
}