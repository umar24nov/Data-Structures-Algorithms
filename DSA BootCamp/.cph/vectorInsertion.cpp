#include <iostream>
#include <vector>
using namespace std;

vector<int> insertInVector(vector<int>& arr, int index, int val){
    int n = arr.size();
    
    for(int i = 1; i <= n; i++){
        for(int j = index; j < n; j++){
            if(i == index){
                arr[i] = val;
            }
        }
        for(int k = index; k <= n; k++){
            arr[i+1] = arr[i];
        }
    }
    
    return arr; 
}

int main (){
    vector<int> arr = {1,3,5,7,8};
    int idx = 2;
    int val = 10;
    vector<int> result = insertInVector(arr,idx, val);
    for(int num : result){
        cout << num << " ";
    }

    return 0;
}