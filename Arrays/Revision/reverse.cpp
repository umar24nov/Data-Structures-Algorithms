#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arr = {4,5,7,2,1};
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    };
    for(auto num : arr){
        cout << num << " ";
    }
    return 0;
}