#include <iostream>
#include <vector>
using namespace std;


// Reverse without using extra space
void reverse1(vector <int>& arr, int size){
    int start = 0, end = size - 1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

// Reverse using extra space
void reverse2(vector <int>& rev,const vector <int>& arr, int size){
    for(int i = 0; i < size; i++){
        rev[i] = arr[size - 1 - i];
    }
}

void printArray(vector<int>& arr){
    for(auto num : arr){
        cout << num << " ";
    }
    cout << endl;
    return;
}

int main (){
    vector <int> arr = {1,2,3,4,5};
    int size = arr.size();
    reverse1(arr, size);
    printArray(arr);
    
    vector <int> rev(size); // Extra Vector
    reverse2(rev, arr, size);
    printArray(arr);
   
    return 0;
}