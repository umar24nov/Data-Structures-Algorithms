#include <iostream>
using namespace std;

int reverse(int num){
    int rev = 0;
    while(num != 0){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

bool palindrome(int num){
    int rev = reverse(num);
    if(num == rev) return true;
    else return false;
}

int main (){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    // bool result = palindrome(num);
    // cout << (result);
    int result = reverse(num);
    cout  << result;
    return 0;
}