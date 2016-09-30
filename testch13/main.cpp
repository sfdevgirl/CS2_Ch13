
//*****************

//Project Name: Chapter 13, Assignment 1

//Project Description: A Simple Student/Date Class

//Project Author: Smith, Shannon

//Is this an extra credit Project:  NO

//Date completed: 09/27/2016

//Operating system used: macOS

//IDE Used:  Eclipse and Xcode
//******************
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
            studentID = UtilitiesClass::inputInt("Enter the ID for the student", i_MIN_INPUT_LENGTH , i_MAX_ID, breakOut);
            aStudent[i].setStuId(studentID);
            //ID
            fName = UtilitiesClass::inputString("Please enter the student's first name: ", i_MIN_INPUT_LENGTH, i_MAX_FIRST_NAME);
            aStudent[i].setFName(fName);
            //first
            lName = UtilitiesClass::inputString("PLease enter the student's last name: ", i_MIN_INPUT_LENGTH, i_MAX_LAST_NAME);
            aStudent[i].setLName(lName);
            //last
            sSNum = UtilitiesClass::inputString("Enter the SSN for the student (999-99-9999): ", i_MIN_INPUT_LENGTH, i_MAX_SOCIAL);
            aStudent[i].setSSNum(sSNum);
            //SS
            gender = UtilitiesClass::inputChar("Enter the Gender (M or F) for the student: ", male, female );
            aStudent[i].setGender(gender);
            //gender
            age = UtilitiesClass::inputInt("Enter the age of the student: ", min_age, max_age, breakOut);
            aStudent[i].setAge(age);
            //age
            cout << "Enrollment Date Input\n";
            
            string aMonth;
                month = UtilitiesClass::inputInt("Enter the Student's Enrollment Month", i_MIN_INPUT_LENGTH, max_month, breakOut);
//                aStudent[i].getEnroll().getMonth();
            
                //month
                
            string aDay;
            day = UtilitiesClass::inputInt("Enter the Student's Enrollment day", i_MIN_INPUT_LENGTH, max_day, breakOut );
//            aStudent[i].getEnroll().getDay();
            
            //day
            string aYear;
          
            year = UtilitiesClass::inputInt("Enter the Student's Enrollment Year", i_MIN_INPUT_LENGTH, max_year, breakOut );
//            aStudent[i].getEnroll().getYear();
           
            //year
           
            aStudent[i].setEnroll(month, day, year);
            aMonth = aStudent[i].getEnroll().getConvertMonth();
            aDay = aStudent[i].getEnroll().getConvertDay();
             aYear = aStudent[i].getEnroll().getConvertYear();
            //user year striing = student[i].convertmonth
            //setenroll = student[i].enrolldate(convert.month/day/year)
            
            string stringPrint;
            stringPrint = aStudent[i].getEnroll().getString(aMonth, aDay, aYear);
            
            
            
            
            
        }//for
        
        printHeader();
        
        
        for (int i=0; i < totalStudents; i++){
            string wholeName;
            wholeName = aStudent[i].getLName() + ", " + aStudent[i].getFName();
            
            cout << setw(10) << aStudent[i].getId()<< setw(25) <<  wholeName<< setw(10)
            << aStudent[i].getAge() << endl;
            
        }//for
        
        delete[] aStudent;
    }//if
    else{}
    cout << "\n!!!Goodbye World!!!" << endl; // end
    return 0;
}

void printHeader(){
    cout <<  "Student Details Report" << endl;
    cout <<  "======================" <<endl;
    cout << setw(10) << "Student ID" << setw(25) << "Student Name" << setw(10)  << "Age" << endl;
    cout << setw(10) << "----------" << setw(25) << "------------" << setw(10)  << "---" << endl;
}