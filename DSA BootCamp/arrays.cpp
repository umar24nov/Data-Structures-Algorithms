#include <iostream>
#include <vector>
using namespace std;


void printArray(vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout <<  endl;
}


void arraysOperations(vector<int>& arr, int idx, int val){
    arr.push_back(0); // to increase size by 1
    int n = arr.size();
    for(int i = n - 1; i >= idx; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = val;
}

int main (){
    vector<int> arr = {1,5,3,7,9};
    int idx = 2;
    int val = 2;
    arraysOperations(arr,idx,val);
    printArray(arr);
    return 0;
}