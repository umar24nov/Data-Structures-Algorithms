#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> arr = {4,7,2,9,0,3,3,7,4,7,2,5,1};
    int n = arr.size();
    int frequency = 0;
    int target;
    cout << "Enter element for which you want frequency: ";
    cin >> target;
    for(int  i = 0; i < n; i++){
        if(arr[i] == target)
        frequency++;
    }
    cout << "Frequency of " << target << " is " << frequency <<"!"; 
    return 0;
}