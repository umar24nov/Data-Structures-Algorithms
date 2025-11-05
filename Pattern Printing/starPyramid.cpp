/*

         * 
        * * 
       * * * 
      * * * * 


*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows/columns: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x = 65;
        // Print Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Print Stars
        for(int j = 1; j <= 2*i-1; j++){ 
            cout << (char)x <<" ";
            x++;
        }
        cout<<endl;  
    }
    return 0;
}


