// Problem : 287. Find the Duplicate Number
// Source : https://leetcode.com/problems/find-the-duplicate-number/submissions/1731257340/

//This question can be solved in many ways but I chose Floyd’s cycle detection because it finds the duplicate in O(n) time and O(1) space, meeting the problem’s constraints without modifying the array.


// Approach 1: Floyd's Cycle Detection (O(n) time, O(1) space)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow!=fast);
        slow = nums[0];
        while(slow!=fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};


// Approach 2: Hash Map (O(n) time, O(n) space)
// Not allowed by constraints, but easy to implement
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums) freq[num]++;
        for(auto& f:freq) if(f.second>=2) return f.first;
        return 0;
    }
};

// Approach 3: Sorting (O(n log n) time, modifies array)
// Not allowed by constraints
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) if(nums[i]==nums[i+1]) return nums[i];
        return 0;
    }
};