/**
 * @file GPACalculatorToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief GPA calculator using dynamic array
 * @version 0.1
 * @date 2022-10-21
 * @since FriDay; 04:38 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int testCase, size;
    cin>>testCase;
    
    float sum, *gpa;
   
    for(register unsigned short int i = 1; i <= testCase; i++){
        sum = 0.0;
        cin>>size;
        gpa = new float[size];
        for(register unsigned short int j = 0; j<size; j++){
            cin>>*(gpa + j);
            sum += *(gpa + j);
        }
        cout<<"Case "<<i<<": ";
        printf("%0.3f\n", (sum / size));
    }
    delete [] gpa;
    
    return 0;
}
