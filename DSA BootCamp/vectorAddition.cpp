#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    vector<vector<int>> brr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = arr.size();
    int cols = arr[0].size();



    vector<vector<int>> result(rows, vector<int>(cols));

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < brr.size(); j++){
            result[i][j] = arr[i][j] + brr[i][j];
        }
    }


    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    

    return 0;
}