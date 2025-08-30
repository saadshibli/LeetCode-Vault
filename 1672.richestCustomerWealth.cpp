// Problem : 1672. Richest Customer Wealth
// Source : https://leetcode.com/problems/richest-customer-wealth/description/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0, mSum=0;
        for(int i=0; i<accounts.size(); i++) {
            for(int j=0; j<accounts[i].size(); j++) {
                sum+=accounts[i][j];
            }
            mSum = max(sum, mSum);
            sum = 0;
        }
        return mSum;
    }
};