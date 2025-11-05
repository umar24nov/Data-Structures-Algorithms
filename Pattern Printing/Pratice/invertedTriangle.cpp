#include <bits/stdc++.h>
using namespace std;
int main (){
    int m;
    cout << "Enter rows/columns: ";
    cin >> m;
    // for(int i = m; i >= 1; i--){
    //     for(int j = 1; j <= i; j++){
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= m+1-i; j++){
        cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}