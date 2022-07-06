/**
 * @file 8_LeapYearToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Leap year
 * @version 0.1
 * @date 2022-07-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
//Wrong solution and definition
int main(int argc, char const *argv[])
{
    /* code */

    int year;
    cin>>year;

    if(year % 4 == 0 && year % 400 != 0)
    cout<<"Yes\n";
    else
    cout<<"No\n";

    return 0;
}
