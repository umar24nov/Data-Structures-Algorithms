#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int sum = 0;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    return  sum;
}

int RecursiveSum(int num){
    if(num < 10) return num;
    return (num % 10) + RecursiveSum(num / 10);
}

int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
   cout << (RecursiveSum(num));
    return 0;
}