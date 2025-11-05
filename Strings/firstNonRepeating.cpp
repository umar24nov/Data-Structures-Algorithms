#include <iostream>
#include <string>
using namespace std;

char firstNonRepeatingChar(string str){
    for(int i = 0;i < str.size(); i++){
        bool isRepeating = true;
        for(int j = 0; j < str.size(); j++){
            if(i != j && str[i] == str[j]){
                isRepeating = false;
                break;
            }
        }
        if(isRepeating) return str[i];
    }
    return '\0';
}

int main (){
    string str = "aabcdde";
    char result =  firstNonRepeatingChar(str);
    if(result != '\0'){
        cout << "First non-repeating character is: " << result << endl;
    }
    else cout << "Non-repeating character not found" << endl;
    return 0;
}