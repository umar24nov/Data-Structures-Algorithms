#include <iostream>
#include <unordered_set>
using namespace std;
int main (){

    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(1);

    s.erase(1);

    for(int num : s){
        cout<<num<<" ";
    }
    cout << endl;

    int target;
    cout << "Enter traget: ";
    cin >> target;

    if(s.find(target) != s.end()){ // Find Method
        cout << "Exists!";
    }

    else cout << "Doesn't Exists!";

    return 0;
}