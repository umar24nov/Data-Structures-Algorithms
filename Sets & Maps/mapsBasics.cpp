#include <iostream>
#include <unordered_map>
using namespace std;
int main (){
    unordered_map<string,int> m;

    pair<string,int> p1;
    p1.first = "Umar";
    p1.second = 29;
    m.insert(p1);

    m["Ayaan"] = 28; // this is easier to insert
    m["Sahib"] = 30;

    m.erase("Ayaan");
    
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}