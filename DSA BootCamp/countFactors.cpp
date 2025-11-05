#include <iostream>
using namespace std;

int main (){
    int num = 12;
    int count = 0;
    for(int  i = 1; i < 48; i++){
        if(num % i == 0) count++;
    }
    cout << count;
    return 0;
}