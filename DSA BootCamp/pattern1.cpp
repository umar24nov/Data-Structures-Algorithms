#include <iostream>
using namespace std;

int main (){
    int n = 5;
    for(int i = 1; i <= n; i++){
        int star = (n+1) - i;
        for(int  j = 1; j <= star; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 2; i <= n; i++){
        int star = i;
        for(int  j = 1; j <= star; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}