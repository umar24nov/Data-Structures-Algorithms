#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arr = {3,-4,6,-3,7};
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sum+=arr[j];
        }
    }
    cout << sum;
    return 0;
}