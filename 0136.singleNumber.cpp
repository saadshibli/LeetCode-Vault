// source : "https://leetcode.com/problems/single-number/description/?envType=problem-list-v2&envId=array"

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int num:nums) ans^=num;
        return ans;
    }
};