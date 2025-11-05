#include <iostream>
#include <string>
using namespace std;

int main (){
    string str = "Mohammad Umar";
    string temp = "";
    for(int i = 0; i < str.size(); i++){
        bool found = false;
        for(int j = 0; j < temp.size(); j++){
            found = true;
            break;
        }
        if(!found){
            temp.push_back(str[i]);
        }

    }
    cout << temp << endl;
    return 0;
}