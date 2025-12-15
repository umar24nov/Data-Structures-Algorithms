#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void printVectors(vector<int>& arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}


int maximum(vector<int>& arr){
    int max = INT_MIN;
    for(int  i = 0; i < arr.size(); i++){
        if(arr[i] > max) max  = arr[i];
    }
    return max;
}


int maximum2(vector<int>& arr){
    int max = INT_MIN;
    int sMax = INT_MIN;
    for(int  i = 0; i < arr.size(); i++){
        if(arr[i] > max) max  = arr[i];
    }
    return max;
}

int main (){

    int n;
    cout << "Enter array size : ";
    cin >> n;

    int val;
    cout << "Enter value : ";
    cin >> val;

    vector<int> arr;

    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(17);
    arr.push_back(18);
    arr.push_back(9);
    arr.push_back(10);



    // printVectors(arr);
    int result = maximum(arr);
    cout <<  result;

    


    return 0;
}