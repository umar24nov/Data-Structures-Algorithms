#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int ans = 0;
    while(num){
        int rem = num % 10;
        ans += rem;
        num /= 10;
    }
    return ans;
}

int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    int result = sumOfDigits(num);
    cout << result;
    return 0;
}