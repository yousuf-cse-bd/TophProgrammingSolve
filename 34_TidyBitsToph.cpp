/**
 * @file 34_TidyBitsToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Decimal to binary and 1's binary to decimal
 * @version 0.1
 * @date 2022-07-19
 * @since TuesDay, 7:17AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int decimal;
    cin>>decimal;
    string binary = "";
    while (decimal != 0)
    {
        /* code */
        unsigned int digitWise = decimal % 2;
        if(digitWise == 1){
            binary += (char)digitWise + '0';
        }
        decimal = decimal / 2;
    }
    unsigned int powerLen = binary.length();
    unsigned int sum = 0;
    for(unsigned int i = 0; binary[i] != '\0'; i++){
        sum += (char)(binary[i] - '0') * pow(2, --powerLen);
    }
    cout<<sum<<endl;
    
    return 0;
}
