/**
 * @file 31_MathAndWatermelonsToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Watermelons distibute them equally.
 * @version 0.1
 * @date 2022-07-19
 * @since TuesDay, 6:23AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int m, k;
    cin>>m>>k;
    unsigned int remainder = m % k;
    cout<<remainder<<endl;
    return 0;
}
