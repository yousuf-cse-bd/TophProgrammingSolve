/**
 * @file 15_CaesarChipherToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Caesar chipher just encryption part
 * @version 0.1
 * @date 2022-07-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
// #include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int shift;
    cin>>shift;
    // scanf("\n"); // Received the new line
    char plainText[100];
    // fgets(plainText, sizeof(plainText), stdin);
    scanf(" %[^\n]", plainText);
    char chipherText;
    for(int i = 0; plainText[i] != '\0'; i++)
    {
        if(plainText[i]  >= 'a' && plainText[i] <= 'z'){
            chipherText = (plainText[i] - shift - 'z') % 26 + 'z';
            cout<<chipherText;
        }
        else if(plainText[i]  >= 'A' && plainText[i] <= 'Z'){
            chipherText = (plainText[i] - shift - 'Z') % 26+'Z';
            cout<<chipherText;
        }
        else
        cout<<plainText[i];

    }
    return 0;
}
