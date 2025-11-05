#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (){
    vector<int> arr = {2,6,8,4,1,-6,-99};
    int n = arr.size();

    int smallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] <= arr[i+1]){
            smallest = arr[i];
        }
    }
    cout << "Smallest is: " << smallest;
    return 0;
}