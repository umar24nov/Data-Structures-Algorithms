#include <iostream>
using namespace std;

void fibonacci(int n){
    int a  = 1, b = 2;

    cout << "Fibonacci Series: ";
    
    for(int i = 0; i < n; i++){
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int main (){


    // Series: 1 2 3 5 8 13
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    fibonacci(n);    
    return 0;
}