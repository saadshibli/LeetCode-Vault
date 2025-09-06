// Problem : 1365. How Many Numbers Are Smaller Than the Current Number
// Source : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/ 


//Brute Force Approach
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++) {
            int count=0;
            for(int j=0; j<nums.size(); j++) {
                if(nums[j]<nums[i] && i!=j) count++;
            }
            arr.push_back(count);
            count=0;
        }
        return arr;
    }
};

//Using Counting Sort
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101,0);
        for(int num:nums) count[num]++;
        for(int i=1; i<=100; i++) count[i]+=count[i-1];
        vector<int> result;
        for(int num:nums) {
            if(num==0) {
                result.push_back(0);
            } else {
                result.push_back(count[num-1]);
            }
        }
        return result;
};

// Using Sorting and Hashing
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        map<int, int> count;
        for(int i=0; i<nums.size(); i++) {
            count.insert({sorted[i], i});
        }
        vector<int> result;
        for(int num:nums) result.push_back(count[num]);
        return result;
    }
};