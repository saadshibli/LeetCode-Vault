// Problem : 1470. Shuffle the Array
// Source : https://leetcode.com/problems/shuffle-the-array/description/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec;
        vec.reserve(2*n);
        for(int i=0; i<n; i++) {
            vec.push_back(nums[i]);
            vec.push_back(nums[n+i]);
        }
        return vec;
    }
};