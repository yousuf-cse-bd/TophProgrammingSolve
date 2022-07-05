/**
 * @file 4_ClockMathToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate angle between hour and minute hands
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int hour, minute;
    cin>>hour>>minute;

    double angle = ((11/2.0 * minute) - (30*hour)) + 360;
    if(angle < 360 - angle) {
        printf("%.7lf\n", angle);
    }
    else {
        printf("%.7lf\n",360 - angle);
    }
    return 0;
}


