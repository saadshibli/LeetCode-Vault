// Problem : 1929. Concatenation of Array
// Source : leetcode.com/problems/concatenation-of-array/description/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums2(n+n);
        for(int i=0; i<n; i++) {
            nums2[i] = nums[i];
            nums2[i+n] = nums[i];
        }
        return nums2;
    }
};