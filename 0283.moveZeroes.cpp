// Problem : 283. Move Zeroes
// Source : https://leetcode.com/problems/move-zeroes/?envType=problem-list-v2&envId=array

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroIndex=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=0) swap(nums[zeroIndex++],nums[i]);
        }
    }
};