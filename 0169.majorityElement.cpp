// Problem : 169. Majority Element
// Source : https://leetcode.com/problems/majority-element/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k = nums.size()/2;
        unordered_map<int,int> freq;
        for(int num : nums) freq[num]++;
        for(auto& n:freq) if(n.second>k) return n.first;
        return -1;
    }
};