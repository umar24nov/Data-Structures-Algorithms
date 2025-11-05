#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end-start) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target)
            start  =  mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main (){
    vector<int> v = {1,2,5,6,9,1,11,30,51,66};
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << binarySearch(v,num);
    return 0;
}