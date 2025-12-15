#include <iostream>
#include <vector>
using namespace std;


void spiralOrder(vector<vector<int>>& arr){
    int rows = arr.size();
    int cols = arr[0].size();

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while(top <= bottom && left <= right){

        // top row
        for(int j = left; j <= right; j++)
            cout << arr[top][j] << " ";
        top++;

        // right column
        for(int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // bottom row
        if(top <= bottom){
            for(int j = right; j >= left; j--)
                cout << arr[bottom][j] << " ";
            bottom--;
        }

        // left column
        if(left <= right){
            for(int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
}


int main (){
    vector<vector<int>> arr = {
        {1,5,7,4},
        {2,3,4,7},
        {7,8,9,3},
        {1,5,2,6}
    };

    spiralOrder(arr);

    
    return 0;
}