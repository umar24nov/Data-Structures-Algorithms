#include <iostream>
#include <climits>
using namespace std;

pair<int,int> linearSearching(int matrix[][2], int rows, int columns, int target){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(matrix[i][j] == target){
            return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main (){
    int rows = 3;
    int columns = 2;
    int matrix[3][2] = {{1,2},{3,4},{5,6}};

    int target;
    cout << "Enter target to search: ";
    cin >> target;

    pair<int,int> result =  linearSearching(matrix,rows,columns,target);

    if(result.first == -1 and result.second  == -1){
        cout << "Target not found!";
    }
    else {
        cout << "{" << result.first << "," << result.second << "}";
    }
    return 0;
}