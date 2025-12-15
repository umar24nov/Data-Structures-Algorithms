#include <iostream>
using namespace std;

string toHex (int num){
    if(num == 0) return "0";
    string hexChars = "0123456789ABCDEF";
    string result = "";

    while(num > 0){
        int rem = num % 16;
        result = hexChars[rem] + result;
        num /= 16;
    }
    return result;
}

int main (){
    int num;
    cin >> num;
    cout << toHex(num);
    return 0;
}