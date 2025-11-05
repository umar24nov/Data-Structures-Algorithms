/*

## * ##
## * ##
** * **
## * ##
## * ##

*/

#include <bits/stdc++.h>
using namespace std;
int main (){
    int  n;
    cout<<"Enter odd number of rows/columns : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int a = n/2 + 1;
            if(i == a || j == a) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}