#include <iostream>
#include <climits>
using namespace std;

// Function to find the row index with the maximum sum
int rowWithMaxSum(int matrix[][3], int rows, int columns) {
    int maxSum = INT_MIN; // Initialize with minimum possible value
    int maxRowIndex = -1; // To store row index with maximum sum

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRowIndex = i;
        }
    }
    return maxRowIndex;
}

int main() {
    int rows = 3;
    int columns = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {7, 9, 6},
        {7, 8, 0}
    };

    int maxRowIndex = rowWithMaxSum(matrix, rows, columns);
    cout << "Row with maximum sum is: Row " << maxRowIndex << endl;

    return 0;
}

