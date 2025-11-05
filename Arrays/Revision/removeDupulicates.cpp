#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> arr = {5,4,6,3,2,4,6,5,8,7,9,8,7};
    
    vector<int> brr; // Temporary Array

    cout << "Original Array: ";
    for(auto num : arr){
        cout << num << " ";
    }
    cout << endl;
    for(int i = 0; i < arr.size(); i++){
        bool found =  false;
        for(int j = 0; j < brr.size(); j++){
            if(arr[i] == brr[j]){
                found = true;
                break;
            }
        }
        if(found == false){
            brr.push_back(arr[i]);
        }
    }

    cout << "After removing duplicates : ";
    for(auto num : brr){
        cout << num << " ";
    }
    return 0;
}