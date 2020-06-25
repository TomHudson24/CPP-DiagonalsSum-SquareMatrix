#include "diagonalDifference.h"

/*
Imagine the square matrix has a coordinate space. 

    0,0     0,1     0,2
    1,0     1,1     1,2
    2,0     2,1     2,2

        ^ Like that ^
Then diag1 starts at the top left of the matrix and diag2 starts at the bottom left.
Each iteration through the loop both variables move diagonally and sum the 
value in that space. 

Once it has made it to the end of the matrix abs is used to return the absolute difference
between the sum of the values (stored in diag1 for the first diagonal sweep and diag2 for the second diagonal sweep).

*/

 int diagonalDifference::diagonalDiff(std::vector<std::vector<int>> arr) {
    int diag1 = 0;
    int diag2 = 0;
    int n = arr[0].size();
    for (int i = 0; i < arr.size(); i++) {
        diag1 += arr[i][i];
        diag2 += arr[i][n - i - 1];
    }
    return abs(diag1 - diag2);
}
