// Problem : 2798. Number of Employees Who Met the Target
// Source : https://leetcode.com/problems/number-of-employees-who-met-the-target/description/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=0;
        for(int h:hours) {
            if(h>=target) n++; 
        }
        return n;
    }
};