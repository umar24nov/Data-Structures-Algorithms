#include <iostream>
#include <cmath>
using namespace std;

int reverseIterative(int num){
    int rev = 0;
    while(num > 0){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}


int countDigts(int num){
    int count = 0;
    while(num > 0){
        num /= 10;
        count++;
    }
    return count;
}


int reverseRecursive(int num){
    if(num < 10) return num;
    int digits = countDigts(num);
    int lastDigit = num % 10;
    int remaining = num / 10;

    return lastDigit * pow(10, digits - 1) + reverseRecursive(remaining);
}

int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    // cout << (reverseIterative(num));
    cout << (reverseRecursive(num));
    return 0;
}