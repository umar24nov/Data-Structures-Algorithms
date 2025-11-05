#include <iostream>
#include <vector>
using namespace std;

int main (){
    int num = 12345;
    int revNum = 0;
    while (num != 0){
        revNum = revNum * 10 + num % 10;

        num /= 10;
    }
    cout << revNum;
    return 0;
}