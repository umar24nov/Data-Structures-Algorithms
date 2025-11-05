#include <iostream>
using namespace std;

int main (){
    int rows;
    cout << "Enter rows : ";
    cin >> rows;
    int cols;
    cout << "Enter cols : ";
    cin >> cols;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= cols; j++){
            if(i <= j || j <= i){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}