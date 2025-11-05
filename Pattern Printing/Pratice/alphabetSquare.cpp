#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter rows/columns: ";
    cin>>n;
    // for(int i = 1; i <= n; i++){
    //     char ch = 'A';
    //     for(int j = 1; j <= i; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // 2nd Method

    // for(int i = 1; i <= n; i++){
    //     int a = 1;
    //     for(int j = 1; j <= i; j++){
    //         int x = a + 64;
    //         cout<< (char)x <<" ";
    //         a++; 
    //     }
    //     cout<<endl;
    // }


    // 3rd Method

    for(int i = 1; i <= n; i++){
        int a = 65;
        for(int j = 1; j <= i; j++){
            cout<< (char)a <<" ";
            a++; 
        }
        cout<<endl;
    }


    
    return 0;
}