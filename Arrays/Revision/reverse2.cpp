#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arr = {4,5,7,2,1};
    int n = arr.size();
    vector<int> rev(n);
    for(int i = 0; i < n; i++){
        rev[i] = arr[n - 1 - i];
    }
    
    for(auto num : rev){
        cout << num << " ";
    }
    return 0;
}