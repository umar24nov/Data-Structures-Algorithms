#include <iostream>
#include <vector>
using namespace std;

void arrayModification(vector<int>& arr, int idx, int val){
    for(int i = 0; i < arr.size(); i++){
        if(i == idx){
            arr[idx] = val;
        }   
    }
}

void printArray(vector<int>& arr){
    for(int ele : arr){
        cout << ele << " ";
    }
}

int main (){
    vector<int> arr = {1,5,3,7,9};
    int idx = 2;
    int val = 100;
    arrayModification(arr,idx,val);
    printArray(arr);
    return 0;
}