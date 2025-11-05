#include <iostream>
using namespace std;

int main (){
    int arr[] = {2,5,4,7,9,23,56,79};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i+1]){
            largest = arr[i];
        }
    }
    cout << "largest is: " << largest;
    return 0;
}