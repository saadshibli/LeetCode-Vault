// Problem : 53. Maximum Subarray
// Source : https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currS=0, maxS=INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            currS+=nums[i];
            maxS = max(maxS, currS);
            if(currS<0) currS=0;
        }
        return maxS;
    }
};