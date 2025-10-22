// Problems : 1769. Minimum Number of Operations to Move All Balls to Each Box
// Source : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0; i<boxes.length(); i++) {
            int a = 0;
            for(int j=0; j<boxes.length(); j++) {
                if(i==j) continue;
                if(boxes[j]=='0') continue;
                a += abs(i-j);
            }
            ans.push_back(a);
        }
        return ans;
    }
};