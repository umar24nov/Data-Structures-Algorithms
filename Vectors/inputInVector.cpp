#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    cout<<"Enter size: ";
    cin >> n;

    vector <int> v;

    cout << "Enter Elements: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector elements are: ";
    for(int num : v){
        cout << num << " "; 
    }
    return 0;
}