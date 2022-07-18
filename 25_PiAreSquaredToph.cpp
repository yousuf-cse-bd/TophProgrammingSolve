/**
 * @file 25_PiAreSquaredToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief  Calculate A=πr^2
 * @version 0.1
 * @date 2022-07-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstdio>
// #include <cmath>
using namespace std;
const double pi = 3.141592653589793;
int main(int argc, char const *argv[])
{
    /* code */
    float r;
    cin >> r;
    r = r * r;
    double area = pi*r;
    printf("%.10lf\n", area);

    return 0;
}
