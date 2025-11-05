#include <iostream>
using namespace std;

string replaceChar(string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'l')
        str[i] = 'x';
    }
    return str;
}

int main (){
    string str = "Hello";
    cout << (replaceChar(str));
    return 0;
}