// Problem : 268. Missing Number
// Source : https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=hash-table

//Approach 1 : Summation (mathematical formula) [optimised]
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum = n*(n+1)/2;
        int s=0;
        for(int num:nums) s+=num;
        return sum-s;
    }
};

//Approach 2 : Hash Table [not optimised]
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> n;
        for(int num:nums) n.insert(num);
        for(int i=0; i<=nums.size(); i++) {
            if(n.find(i)==n.end()) return i;
        }
        return -1;
    }
};