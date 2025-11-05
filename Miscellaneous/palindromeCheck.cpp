#include <iostream>
using namespace std;

int reverseNum(int num){
    int revNum = 0;
    while(num != 0){
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }
    return revNum;
}

int main (){
    int Originalnum;
    cout << "Enter a Number: ";
    cin >> Originalnum;
    int revNum = reverseNum(Originalnum);
    if(Originalnum == revNum){
        cout << "Palindrome!";
    }
    else cout << "Not a Palindrome!";
    return 0;
}