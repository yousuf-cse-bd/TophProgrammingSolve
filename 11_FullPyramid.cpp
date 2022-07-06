/**
 * @file 11_FullPyramid.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Full pyramid shape using nested loop
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
    // system("cls");
    int n ;
    cin>>n;
    for(int i = 1; i<=n ;i++)
    {
        for(int j = 1; j<=n - i; j++){
            cout<<" ";
        }
        for(int j = 1; j<=i; j++){
            if(i==j)
            cout<<"*";
            else
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
