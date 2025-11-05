#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    int result = factorial(num);
    cout << result;
    return 0;
}