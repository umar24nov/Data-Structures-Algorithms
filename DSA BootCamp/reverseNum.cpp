#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter : ";
    cin >> n;
    int rN = 0;
    while(n > 0){
        rN = rN * 10 + n % 10;
        n /= 10;
    }
    cout << rN;
    return 0;
}