// Problem : 3289. The Two Sneaky Numbers of Digitville
// Source : https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> d;
        for(int n:nums) freq[n]++;
        for(auto& num:freq) {
            if(num.second>1) d.push_back(num.first);
        }
        return d;
    }
};