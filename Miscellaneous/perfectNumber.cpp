#include <iostream>
using namespace std;

void perfectNumber(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum += i;
    }
    if(sum == num){
        cout << "Perfect Number!";
    }
    else cout << "Not a Perfect Number!";
    return;
}

int main (){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    perfectNumber(num);
    
    return 0;
}