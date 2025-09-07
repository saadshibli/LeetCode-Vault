// Problem : 3190. Find Minimum Operations to Make All Elements Divisible by Three
// Source : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int num:nums) if(num%3!=0) count++;
        return count;
    }
};