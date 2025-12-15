#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void printArray(vector<int> arr){
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}

pair<int, int> secondMaximum(vector<int>& arr){
    int n = arr.size();
    int max = INT_MIN;
    int sMax = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            sMax = max;
            max = arr[i];
        }
        else if(arr[i] > sMax){
            sMax = arr[i];
        }
    }
    return {max, sMax};
}

int main (){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    pair<int, int> result = secondMaximum(arr);
    cout << "Maximum: " << result.first << "\nSecond Maximum: " << result.second;
    
    return 0;
}