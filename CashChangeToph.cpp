/**
 * @file CashChangeToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Cash note changed
 * @version 0.1
 * @date 2022-11-06
 * @since SunDay; 09:59 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int note;
    cin>>note;
    const unsigned short int note500 = 500, note100 = 100, note50 = 50, note10 = 10, note5 = 5, note1 = 1; 
    unsigned short int notes[20];
    unsigned short int index = 0;
    while(note != 0){
        if(note >= note500){
            *(notes + index++) = note500;
            note -= note500;
        }else if(note >= note100){
            *(notes + index++) = note100;
            note -= note100;
        }else if(note >= note50){
            *(notes + index++) = note50;
            note -= note50;
        }else if(note >= note10){
            *(notes + index++) = note10;
            note -= note10;
        }else if(note >= note5){
            *(notes + index++) = note5;
            note -= note5;
        }else if(note >= note1){
            *(notes + index++) = note1;
            note -= note1;
        }
    }
    while(index --){
        cout<<*(notes + index)<<" ";
    }
    cout<<endl;
    return 0;
}
