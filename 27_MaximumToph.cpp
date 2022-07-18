/**
 * @file 27_MaximumToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Given NN numbers, find the one that is of the highest value and print it.
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;

int maximum(int A[], unsigned int n)
{
    int maxValue = A[0];
    for(unsigned int i = 1; i<n; i++){
        maxValue = max(maxValue, A[i]);
    }  
    return maxValue;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin>>n;
    int A[n];
    for(unsigned int i = 0; i<n; i++){
        cin>>A[i];
    }
    cout<<maximum(A, n)<<endl;
    return 0;
}
