#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

void strongNumber(int num){
    int originalNum = num;
    int ans = 0;
    while(num){
        int rem = num % 10;
        ans = ans + factorial(rem);
        num /= 10;
    }
    if(ans == originalNum)
        cout << "Strong Number!";
    else 
        cout << "Not a Strong Number!";
    return;
}


int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    strongNumber(num);
    return 0;
}