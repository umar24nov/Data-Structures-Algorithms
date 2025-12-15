#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arr = {1,5,3};
    vector<int> brr = {2,-3,7};

    int sum = 0;

    for(int i = 0; i < arr.size(); i++){
        sum = sum + arr[i] * brr[i];
    }
    cout << sum;
    return 0;
}