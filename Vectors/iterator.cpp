#include <iostream>
#include <vector>
using namespace std;
int main (){
    
    vector <int> v = {1,2,3,4,5};
    //also this whole thing(vector<int>::iterator it;) we can replace with auto
    
    // Forward Loop
    for(auto it  = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    // Backward Loop

    for(auto ite = v.rbegin(); ite != v.rend(); ite++){
        cout << *(ite) << " ";
    }

    cout << endl;
    
    return 0;
}