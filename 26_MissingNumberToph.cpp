/**
 * @file 26_MissingNumberToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find the missing number
 * @version 0.1
 * @date 2022-07-18
 * @since Monday, 11:43AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int S, a, b ,c, sum;
    cin>>S;
    cin>>a>>b>>c;
    sum = a + b + c;
    S = S - sum;
    cout<<S<<endl;
    return 0;
}
