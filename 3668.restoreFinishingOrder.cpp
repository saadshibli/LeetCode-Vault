// Problem : 3668. Restore Finishing Order
// Source : https://leetcode.com/problems/restore-finishing-order/

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> arr;
        for(int f:friends) arr.insert(f);
        vector<int> result;
        for(int o:order) {
            if(arr.find(o) != arr.end()) result.push_back(o);
        }
        return result;
    }
};