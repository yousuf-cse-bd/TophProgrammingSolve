/**
 * @file NusratsTreatToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of nth number using recursion method
 * @version 0.1
 * @date 2023-02-19
 * @since SunDay; 11:53 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

constexpr size_t sum(const int &n){
    if(n == 0){
        return 0;
    }
    else{
        return (n+sum(n-1));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
