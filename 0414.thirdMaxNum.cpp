// Problem: 414. Third Maximum Number
// Source : "https://leetcode.com/problems/third-maximum-number/description/?envType=problem-list-v2&envId=array"

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()>=3) {
            return nums[nums.size()-3];
        } else {
            return nums.back();
        }
    }
};