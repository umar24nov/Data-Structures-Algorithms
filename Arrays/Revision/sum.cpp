#include <iostream>
#include <vector>
using namespace std;

int main (){
    int sum = 0;
    int mul = 1;
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    for(int i = 0; i < n; i ++){
        sum+= arr[i];
        mul*= arr[i];
    }
    cout << sum << endl;
    cout << mul << endl;
    return 0;
}