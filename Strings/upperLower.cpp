#include <iostream>
#include <string>
using namespace std;

string toUpper(string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    return str;
}

string toLower(string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    return str;
}

int main (){
    string str = "Mohammad Umar";
    string upper = toUpper(str);
    string lower = toLower(str);
    cout << upper << endl << lower;
    
    return 0;
}