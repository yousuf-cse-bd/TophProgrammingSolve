/**
 * @file ReverseManToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Reverse string using built-in algorithm
 * @version 0.1
 * @date 2023-02-20
 * @since MonDay; 11:07 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]){
    system("cls");
	string line;
	getline(cin, line);
	reverse(line.begin(), line.end());
	cout<<line<<endl;
	return 0;
}