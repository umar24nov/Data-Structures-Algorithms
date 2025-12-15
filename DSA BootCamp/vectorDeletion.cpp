#include <iostream>
#include <vector>
using namespace std;



void arrayDeletion(vector<int>& arr, int idx) {
    for(int i = idx; i < arr.size() - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr.pop_back(); 

    return;
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

    arrayDeletion(arr,idx);
    printArray(arr); 
    


    return 0;
}