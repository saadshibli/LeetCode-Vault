// Problem : 442. Find All Duplicates in an Array
// Source : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

//Optimized Approach:
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            int idx = abs(nums[i]) - 1;
            if(nums[idx] > 0) {
                nums[idx] = -nums[idx];
            } else {
                ans.push_back(abs(nums[i]));
            }
        }
        return ans;
    }
};

//Not Optimized:
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int n:nums) {
            freq[n]++;
        }
        vector<int> arr;
        for(auto& f:freq) {
            if(f.second>1) arr.push_back(f.first);
        }
        return arr;
    }
};