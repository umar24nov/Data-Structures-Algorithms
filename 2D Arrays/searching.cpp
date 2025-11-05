#include <iostream>
using namespace std;

int main (){

    /*  
        Values       Indexes
        {{1,2},    0,0 and 0,1
         {3,4},    1,0 and 1,1
         {5,6}}    2,0 and 2,1
    */

    int matrix[3][2] = {{1,2},{3,4},{5,6}};
    
    int target;
    cout << "Enter target to search: ";
    cin >> target;

    cout << "" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(matrix[i][j] == target){
            cout << target << " found at index: {" << i << "," << j << "}";
            return 0;
            }
        }
    }
    cout << "Target not found!";
    return 0;
}