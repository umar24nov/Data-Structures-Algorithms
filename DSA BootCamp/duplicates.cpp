#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool haveDuplicates(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i - 1]) return true;
    }
    return false;
}

int main (){
    vector<int> arr = {1,3,4,5,7,2,3};
    cout << haveDuplicates(arr);
    return 0;
}