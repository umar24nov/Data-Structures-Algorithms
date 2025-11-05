#include <iostream>
using namespace std;

int primeNumbers(int num){
    for(int i = 0; i <= num; i++){
        for(int i = 2; i*i <= num; i++){
        if(num % i == 0) return 0;
        else return i;
        }
    }
    
}


int main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = primeNumbers(num);
    cout << result;
    return 0;
}