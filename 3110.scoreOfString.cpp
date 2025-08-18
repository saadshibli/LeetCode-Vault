// Problem : 3110. Score of a String
// Source : https://leetcode.com/problems/score-of-a-string/description/

class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=1; i<s.length(); i++) {
            int l1 = s[i-1]-'a'+'a';
            int l2 = s[i]-'a'+'a';
            score+=abs(l1-l2);
        }
        return score;
    }
};