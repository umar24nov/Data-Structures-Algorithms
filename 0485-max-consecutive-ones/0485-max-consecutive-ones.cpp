class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int maxCnt = 0, currCnt = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 1){ 
                currCnt++;
                if(currCnt > maxCnt) maxCnt = currCnt;
            }
            else currCnt = 0;
        }
        return maxCnt;
    }
};