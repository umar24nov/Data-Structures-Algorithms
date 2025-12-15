#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                return true;
            }
            mp[nums[i]] = 1;
        }
        return false;
}


int main (){
    vector<int> arr = {1,5,3,7,9};
    bool result = containsDuplicate(arr);
    cout << result;
    return 0;
}