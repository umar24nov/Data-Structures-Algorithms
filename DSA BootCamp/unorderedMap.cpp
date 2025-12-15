#include <iostream>
#include <unordered_map>
using namespace std;

int main (){
    
    unordered_map<int,string> um = {{1,"Umar"},{2,"Humza"},{3,"Abdul"}};


    

    um.insert({0,"Ayaan"});
    // cout << um.at(0);



    // if(um.find(2) != um.end()){
    //     cout << "Present";
    // }
    // else cout << "Not Present!";

    
    return 0;
}