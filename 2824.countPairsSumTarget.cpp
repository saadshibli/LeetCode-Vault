// Problem : 2824. Count Pairs Whose Sum is Less than Target
// Source : https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int pairs=0;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i]+nums[j]<target) pairs++;
            }
        }
        return pairs;
    }
};