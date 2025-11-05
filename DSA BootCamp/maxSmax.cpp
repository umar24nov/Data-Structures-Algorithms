#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> maxSmax(vector<int>& arr){
    int max1 = 0, max2 = 0;
    for(int  i = 0 ; i < arr.size(); i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        } 
        else if(arr[i] > max2) max2 = arr[i];
    }
    return {max1, max2};
}

int main (){
    vector<int> arr = {1,4,8,3,5,8,9};
    pair<int,int> ans = maxSmax(arr);
    cout << "Max: " << ans.first << "  Second Max: " << ans.second;
    return 0;
}