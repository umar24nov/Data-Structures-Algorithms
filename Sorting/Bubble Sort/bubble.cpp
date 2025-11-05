#include <iostream>
#include <vector>
using namespace std;

void buubbleSort(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        bool isSwap = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            isSwap = true;
            }
        }
        if(isSwap == false) return; // array is alredy sorted
    }
}

int main (){
    vector<int> arr = {1,3,2,5,8,7,9,0,4};
    buubbleSort(arr);

    for(int num : arr){
        cout << num << " ";
    }
    return 0;
}