#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = arr.size();
    int cols = arr[0].size();


    cout << "First Diagonal Elements: " ;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j)
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    cout << "Second Diagonal Elements: ";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i+j == rows - 1)
            cout << arr[i][j] << " ";
        }
    }

   
    return 0;
}