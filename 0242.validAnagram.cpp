// Problem : 242. Valid Anagram
// Source : https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        if(t.size()!=s.size()) return false;
        for(int i=0; i<s.size(); i++) {
            ++count[s[i]-'a'];
            --count[t[i]-'a'];
        }
        for(int n:count) if(n<0) return false;
        return true;
    }
};