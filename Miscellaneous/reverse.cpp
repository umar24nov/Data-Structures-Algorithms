#include <iostream>
using namespace std;

void reverseNum(int num){
    int revNum = 0;
    while(num > 0){
    revNum = revNum * 10 + num % 10;
    num /= 10;
    }
    cout << revNum;
}

int main (){

    int num;
    cout << "Enter a Number: ";
    cin >> num;
    reverseNum(num);
    
    return 0;
}