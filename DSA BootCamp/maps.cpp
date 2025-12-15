#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, string>& mpp){
    for(auto x : mpp){
        cout << x.first << " " << x.second;
        cout << endl;
    }
}

int main (){


    // Creating an empty map
    map<int, string> m1;


    // Initialze map with list
    map<int, string> mp = {{1,"Umar"},{2,"Humza"},{3,"Abdul"}};


    // Inserting a key value pair
    mp.insert({4,"Sahib"});
    
    // accessing elements
    // cout << mp[1]<<endl;
    // cout << mp.at(3);

    
    // Updating Value
    mp[3] = "Ayaan"; 
    // printMap(mp);


    // Finding element
    // auto it = mp.find(2);

    // if(it != mp.end()){
    //     cout << 
    // }

    auto it = mp.find(5);
    
    if (it != mp.end()){
        cout << it->first << " " << it->second;
    }
    else cout << "Key not Found!";


    return 0;
}