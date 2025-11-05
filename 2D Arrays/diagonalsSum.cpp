#include <iostream>
#include <climits>
using namespace std;


int diagonalSum(int matrix[][3], int n) {
    int diagonalSum = 0;
    int maxRowIndex = -1;

    /*
    Primary Diagonal => (i == j)
    Secondary Diagonal => (i+j = n - 1) => (j = n-i-1)
    */

    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
        if(i != n - i -1)
        diagonalSum += matrix[i][n - i - 1];
    }
    return diagonalSum;
}

int main() {
    int rows = 3;
    int columns = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = diagonalSum(matrix, rows);
    cout << "The sum of the diagonals is: " << result << endl;

    return 0;
}