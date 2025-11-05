#include <iostream>
using namespace std;

int main (){
    int a, b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;

    int num1 = a;
    int num2 = b;

    int hcf = 1;
    while(a % b != 0){

        int c = a % b;
        a = b;
        b = c;
        hcf = b;
    }
    cout << "HCF = " << hcf << endl;

    // lcm =  ( original a * original b)/hcf
    int lcm = (num1 * num2) / hcf;
    cout << "LCM = " << lcm;
    return 0;
}