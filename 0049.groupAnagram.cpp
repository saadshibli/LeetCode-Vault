// Problem : 49. Group Anagrams
// Source : https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        for(string str:strs) {
            vector<int> count(26,0);
            for(char s:str) {
                count[s-'a']++;
            }
            string key;
            for(int i=0; i<26; i++) {
                key+='#';
                key+=to_string(count[i]);
            }
            group[key].push_back(str);
        }
        vector<vector<string>> result;
        for(auto& [key, gp]:group) {
            result.push_back(gp);
        }
        return result;
    } 
};