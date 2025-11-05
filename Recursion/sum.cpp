#include <iostream>
using namespace std;

int sum(int num){
    if(num == 0) return 0;
    return num + sum(num - 1);
}

int main (){
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    int result = sum(num);
    cout << result;
    return 0;
}