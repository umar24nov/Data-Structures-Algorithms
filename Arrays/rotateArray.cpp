#include <iostream>
#include <vector>
using namespace std;


vector<int> rotateArray(vector<int> &arr){
    int temp = arr[0];
    int n = arr.size();
    for(int i = 1; i < arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main (){
    vector<int> arr = {5,3,2,6,4,1};
    vector<int> res = rotateArray(arr);
    for(int num : res){
        cout << num << " ";
    }
    return 0;
}