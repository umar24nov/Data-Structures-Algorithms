#include <iostream>
using namespace std;


char toLower(char name){
    char ans = name - 'a' + 'A';
    return ans;
}

 char toUpper(char name){
    char ans=name-'a'+'A';
    return ans;
 }




int main (){
    char name;
    cout<<"Enter the Small char: ";
    cin>>name;
    char result1 = tolower(name);
    char result2 = tolower(name);
    cout << result1 << endl;
    cout << result2;

   
}