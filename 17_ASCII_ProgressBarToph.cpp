/**
 * @file 17_ASCII_ProgressBarToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Progress Bar
 * @version 0.1
 * @date 2022-07-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin>>n;
    int a = n / 10;
    cout<<"[";
    for(int i = 1; i<=a; i++){
        cout<<"+";
    }
    for(int i = 1; i<=(10 - a); i++){
        cout<<".";
    }
    cout<<"] "<<n<<"%"<<endl; 
    return 0;
}
