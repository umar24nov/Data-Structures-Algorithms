#include <iostream>
#include <string>
using namespace std;

string replaceChar(string str){
    // this will only replace first instance of 'm'.
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'm'){
            str[i] = 'M';
            break;
        }
    }
    // this will replace all small 'u' to 'U'.
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'u') str[i] = 'U';
    }
    return str;
}
int main (){
    string str = "mohammad umar";
    string res =  replaceChar(str);
    cout << res;
    return 0;
}