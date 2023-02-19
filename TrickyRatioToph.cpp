/**
 * @file TrickyRatioToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple calculation, ratio between circumference & diameter of circle
 * @version 0.1
 * @date 2023-02-19
 * @since SunDay; 11:34 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    float r{}; /*r = radius*/
    cin>>r;
    constexpr double pi {3.14159};
    const double c {2*pi*r};
    const double d = 2*r;

    cout<<fixed<<setprecision(5);
    cout<<(c/d)<<endl;

    return 0;
}
