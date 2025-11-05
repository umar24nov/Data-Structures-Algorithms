#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    vector<int> v;
    for(int i = 1; i * i <= num; i++){
        if(num % i == 0){
            v.push_back(i);
        if(num / i != i) 
            v.push_back(num / i);
        }
    }
    sort(v.begin(), v.end());
    cout << "Divisors: ";
    for(int x : v){
        cout << x << " ";
    }
    return 0;
}