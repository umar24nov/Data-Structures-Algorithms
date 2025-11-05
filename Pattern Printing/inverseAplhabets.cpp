/*

Ques -> Print this Pattern
             A
           A B
         A B C
       A B C D 
     A B C D E

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows/columns: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x = 65;
        for (int j = 1; j <= n-i; j++) {
            cout<<"  ";
        }
        for(int k = 1; k <= i; k++){
          cout<< (char)x<<" ";
          x++;
        }
        cout<<endl;
    }

    return 0;
}