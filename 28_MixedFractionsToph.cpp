/**
 * @file 28_MixedFractionsToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Fraction type normalization.
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int divisor, divisible, quotient, remainder;

    cin>>divisible>>divisor;
    quotient = divisible / divisor;
    remainder = divisible % divisor;

    cout<<quotient<<" "<<remainder<<" "<<divisor<<endl;

    return 0;
}