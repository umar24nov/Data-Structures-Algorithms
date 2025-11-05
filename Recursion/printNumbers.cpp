#include <iostream>
using namespace std;

void printNto1(int num){
    if(num <= 0) return;
    cout << num << " ";
    printNto1(num - 1);
}


void print1toN(int num){
    if(num <= 0) return;
    print1toN(num - 1);
    cout << num << " ";
}


int main (){
    int n;
    cout << "Enter N: ";
    cin >> n;
    print1toN(n);
    cout << endl;
    printNto1(n);
    return 0;
}