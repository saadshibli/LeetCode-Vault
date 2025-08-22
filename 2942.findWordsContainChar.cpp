// Problems : 2942. Find Words Containing Character
// Source : https://leetcode.com/problems/find-words-containing-character/description/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;
        for(int i=0; i<words.size(); i++) {
            if(words[i].find(x)!=string::npos) {
                index.push_back(i);
            }
        }
        return index;
    }
};