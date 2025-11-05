#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v = {1,2,1,0,1,2,0,2,0};

    int numOfZeros = 0;
    int numOfOnes = 0;
    int numOfTwos = 0;

    cout<<"Array before sorting colors : ";
    for(int num : v){
        cout<<num<<" ";
    }
    cout<<endl;
    for(int num : v){
        if(num == 0) numOfZeros++;
        else if(num == 1) numOfOnes++;
        else numOfTwos++;
    }

    for(int i = 0; i < v.size(); i++){
        if(i < numOfZeros) v[i] = 0;
        else if (i < (numOfZeros + numOfOnes)) v[i] = 1;
        else v[i] = 2;
    }

    cout<<"Array after sorting colors: ";
    for(int num : v){
        cout<<num<<" ";
    }    
    return 0;
}