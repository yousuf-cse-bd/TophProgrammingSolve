/**
 * @file 23_GoatResearchToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Main focus string center alignment.
 * @version 0.1
 * @date 2022-07-18
 * @since Monday, 9:17AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int testCase, t;
    // cout<<"Enter the test case here: ";
    cin>>testCase;
    string sounds[testCase];
    string singleWord, restOfString;
    unsigned int len, maxLen = 0;
    for(t = 0; t<testCase; t++){
        // cout<<"Enter the word here: ";
        cin>>singleWord;
        len = singleWord.length();
        unsigned int aCounter = 0;
        /*Count the number of a's*/
        for(unsigned int i = 0; i<len; i++){
            if(singleWord[i] == 'a'){
                ++ aCounter;
            }
        }
        if(aCounter == 1){
            singleWord += "a";
            sounds[t] = singleWord;
        }
        else if(aCounter % 2 == 1 && aCounter > 2){
            restOfString = "";
            /*To make even number of a's and eliminate right side of single a*/
            for(unsigned int i = 0; i<len - 1; i++){
                restOfString += singleWord[i];
            }
            sounds[t] = restOfString;
        }
        else{
            sounds[t] = singleWord;
        }
        /*Calculate max len of the string array*/
        len = sounds[t].length();
        maxLen = max(maxLen, len);
    }
    /*Set center alignment*/
    unsigned int midMaxLen = maxLen / 2;
    unsigned int midLen, spaces;
    for(t = 0; t<testCase; t++){
        len = sounds[t].length();
        midLen = len / 2;
        spaces = midMaxLen - midLen; // alwyaws midMaxLen > midLen
        for(unsigned int i = 1; i<=spaces; i++){
            printf(" ");
        }
        cout<<sounds[t]<<endl;
    }

    return 0;
}
