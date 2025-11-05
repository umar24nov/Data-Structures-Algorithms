#include <iostream>
using namespace std;

int main (){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int rev[n];
    for(int i = 0; i < n; i++){
        rev[i] = arr[n - 1 - i];
    }
    for(int num : arr){
        cout << num << " ";
    }
}
