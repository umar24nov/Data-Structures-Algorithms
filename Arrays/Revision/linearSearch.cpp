#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arr = {3,5,8,7,2,0};
    int n = arr.size();

    int search;
    cout << "Enter element you want to search: ";
    cin >> search;
    for(int i = 0; i < n; i++){
        if(arr[i] == search) cout << "Index is: " << i;
        else {
            cout << "Element not present!";
            break;
        }
    }
    return 0;
}