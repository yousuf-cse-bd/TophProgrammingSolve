/**
 * @file 6_IsPrimeToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Number isPrime or not?
 * @version 0.1
 * @date 2022-01-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(unsigned n){
    int flag = true;
    for(int i = 2; i<=sqrt(n); i++){
        if(n % i == 0){
            flag = false;
            break;
        }
    }

    if(flag == true){
        return true;
    }else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned n;
    cin>>n;

    if(isPrime(n)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}
