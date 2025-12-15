#include <iostream>
#include <vector>
using namespace std;


void arrayInsertion(vector<int>& arr,int idx, int val){
    arr.push_back(0);
    int n = arr.size();
    for(int i = n - 2; i >= idx; i--){
        arr[i + 1] = arr[i];
    }
    arr[idx] = val;
}

void printArray(vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}

int main (){
    vector<int> arr = {1,5,7,8,9,10};
    int idx;
    cout << "Enter an Index: ";
    cin >> idx;


    int val;
    cout << "Enter value to insert : ";
    cin >> val; 
    



    arrayInsertion(arr,idx, val);
    printArray(arr);


    return 0;
}