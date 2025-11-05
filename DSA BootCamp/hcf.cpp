#include <iostream>
using namespace std;

int main (){
    int a;
    cout << "Enter first number: ";
    cin >> a;
    int b;
    cout << "Enter second number: ";
    cin >> b;

    // Factors of a
    for(int i = 1; i <= a; i++){
        if(a%i == 0){
            cout << i << " ";
        }
    }
    cout << endl;

    // Factors of b
    for(int i = 1; i <= b; i++){
        if(b%i == 0){
            cout << i << " ";
        }
    }

    // HCF of two numbers
    cout <<  endl;
    int hcf = 1;
    for(int i = 1; i <= a && i <= b; i++){
        if((a%i == 0) && (b%i == 0)){
            hcf = i;
        }
    }

    cout << "HCF = " << hcf << endl;

    return 0;
}