/**
 * @file 36_ProperLeapYearToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check leap year or not?
 * @version 0.1
 * @date 2022-07-20
 * @since WednesDay, 8:30AM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
//Proper solution and definition
bool isLeapYear(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0){
        return true;
    }
    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0){
        return false;
    }
    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0){
        return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    /* code */

    int year;
    cin>>year;

    if(isLeapYear(year)){
        cout<<"Yes"<<endl; 
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
