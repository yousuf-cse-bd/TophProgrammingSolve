/**
 * @file 18_LittleMatrixMulplicationToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Matrix maltiplication nothing else.
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

    int row1, column1, row2, column2, i ,j;
    row1 = column1 = row2 = column2 = 2;

    /*Input elements for first matrix*/
    int A[row1][column1];
    for(i = 0; i<row1; i++){
        for(j = 0; j<column1; j++){
            cin>>A[i][j];
        }
    }

    /*Input elements for 2nd matrix*/
    int B[row2][column2];
    for(i = 0; i<row2; i++){
        for(j = 0; j<column2; j++){
            cin>>B[i][j];
        }
    }

    // Product of matrix
    int A_B[row1][column2];
    for(i = 0; i<row1; i++){
        for(j = 0; j<column2; j++){
            A_B[i][j] = 0;
            for(int k = 0; k<column1; k++){
                A_B[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }

    /*Expected result*/
    for(i = 0; i<row1; i++){
        for(j = 0; j<column2; j++){
            cout<<A_B[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
