#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr){
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] > arr[i+1]) return false;
    }
    return true;
}

int main (){
    vector<int> arr = {4,6,8,9};
    bool result = isSorted(arr);
    cout << (result ? "Sorted!" : "Not Sorted!");
    return 0;
}