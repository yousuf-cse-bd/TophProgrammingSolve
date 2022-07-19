/**
 * @file 32_MakingFriendsToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief This concept is taken from pefect number.
 * @version 0.1
 * @date 2022-07-19
 * @since TuesDay, 6:33AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int counter, n;
    cin>>n;
    counter = 0;
    for(unsigned int i = 1; i<n; i++){
        if(n % i == 0){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
