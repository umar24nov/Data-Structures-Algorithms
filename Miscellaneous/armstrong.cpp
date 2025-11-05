#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num){
    int count = 0;
    while(num){
        num /= 10;
        count++;
    }
    return count;
}

void armstrong(int num){
    int originalNum = num;
    int ans  = 0;
    int digits = countDigits(num);

    while(num){
    int rem = num % 10;

    // Debug using AI here
    ans += static_cast<int>(pow(rem, digits) + 0.5);
    num /= 10;
    }
    if(ans == originalNum){
        cout << "Armstrong Number!";
    }
    else cout << "Not an Armstrong Number!";
    return;
}

int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    armstrong(num);
    return 0;
}