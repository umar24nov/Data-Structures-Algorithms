#include <iostream>
#include <string>
using namespace std;

int main (){
    string str = "Mohammad Umar";
    int vowels = 0;
    int consonants = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
        else if(str[i] == ' ') continue;
        else consonants++; 
    }
    cout << "Your string is: " << str << endl;
    cout << "No. of Vowels are: " << vowels << endl;
    cout << "No. of Consonants are: " << consonants << endl;
    return 0;
}