#include <iostream>
using namespace std;

void Factors(int num){
    int sum = 0;
    cout << "Factors of " << num << " are : ";
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cout << i << " ";
            sum += i;
        }
        
    }
    cout << "\nSum of factors of " << num << " are : " << sum << endl;
}

int main (){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    Factors(num);
    return 0;
}