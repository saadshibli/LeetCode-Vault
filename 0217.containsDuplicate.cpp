// Problem : 217. Contains Duplicate
// Source : https://leetcode.com/problems/contains-duplicate/description/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> duplicate;
        for(int num:nums) {
            if(duplicate.count(num)) return true;
            duplicate.insert(num);
        }
        return false;
    }
};