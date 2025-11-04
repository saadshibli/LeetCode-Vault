// Problem : 2574. Left and Right Sum Differences
// Source : https://leetcode.com/problems/left-and-right-sum-differences/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int s = nums.size();
        vector<int> lS(s);
        vector<int> rS(s);
        vector<int> answer(s);
        int l=0, r=0;
        for(int i=0; i<s; i++) {
            lS[i] = l;
            rS[s-i-1] = r;
            l+=nums[i];
            r+=nums[s-i-1];
        }
        for(int i=0; i<s; i++) {
            answer[i] = abs(lS[i]-rS[i]);
        }
        return answer;
    }
};