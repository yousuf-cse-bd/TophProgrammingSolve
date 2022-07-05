/**
 * @file 3_FormattedNumbersToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Gropting the big nummber is deshi system
 * @version 0.1
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Read an integer variable and print it in which the digits are
separated into groups of three by commas*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string input;
    cin>>input;
    for(int i = input.size() - 3; i>0; i = i - 3)
    {
        input.insert(input.begin() + i, ',');
    }

    cout<<input<<endl;

    
    return 0;
}

