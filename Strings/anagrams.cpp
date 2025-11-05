/*
An anagram is a word formed by rearranging the letters of another word.
Ex => (race -> care), (silent -> listen), (earth -> heart), (debit card -> bad credit)....etc.
*/


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void isAnagram(string str1, string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1 == str2){
        cout << "Strings are Anagram!";
    }
    else cout << "Strings are not Anagram!";
    return;
}

int main (){
    string str1;
    cout << "Enter first string: ";
    getline(cin, str1);
    string str2;
    cout << "Enter second string: ";
    getline(cin, str2);
    isAnagram(str1, str2);
    return 0;
}