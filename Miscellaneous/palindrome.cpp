#include <iostream>
using namespace std;

int reverse(int num){
    int revNum = 0;
    while(num){
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }
    return revNum;
}

void isPalindrome(int num){
    int revNum = reverse(num);
    if(num == revNum)
        cout << "Palindrome Number!";
    else 
        cout << "Not a Palindrome Number!";
}

int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    isPalindrome(num);

    
    
    return 0;
}