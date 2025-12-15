#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 3, 6},
        {7, 8, 9}};

    int rows = arr.size();
    int cols = arr[0].size();

    int sum = 0;
    vector<vector<int>> result;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (i == j || i + j == rows - 1){
                sum += arr[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}