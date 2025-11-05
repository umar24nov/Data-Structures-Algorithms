#include <iostream>
using namespace std;

void sortStrings(string str){
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] > str[i+1]){
        cout << "Sorted!";
        break;
        }
        else {
            cout << "Not Sorted!";
            break;
        }
    }
    return;
}

int main (){
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    sortStrings(str);
    return 0;
}