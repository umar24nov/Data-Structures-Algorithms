#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arr = {1,2,3,2,4,3};
    cout << arr.size() << endl;
    int n = arr.size();
    int temp = 0;
    int val = 2;
    for(int i = 0; i < n; i++){
        if(arr[i] != val){
            arr[temp] = arr[i];
            temp++;
        }
    }
    arr.resize(temp);
    for(int num : arr){
        cout << num << " ";
    }
    return 0;
}   