/*

Pattern :  

    1 2 3 4
    2 3 4
    3 4
    4

*/


#include <iostream>
using namespace std;

void rightTriangle(int x){
    for(int i = 1; i <= x; i++){
        for(int j = i; j <= x; j++){ 
            cout<<j<<" ";
        }
    cout<<endl;
    }
    return;
}
int main(){
    int a;
    cout<<"Enter number of rows : ";
    cin>>a;
    rightTriangle(a);
}