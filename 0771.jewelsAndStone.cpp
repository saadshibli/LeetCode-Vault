// Problems : 771. Jewels and Stones
// Source : https://leetcode.com/problems/jewels-and-stones/description/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> f;
        for(char c:stones) f[c]++;
        int count=0;
        for(auto& n:f) {
            for(int i=0; i<jewels.length(); i++) {
                if(jewels[i]==n.first) count+=n.second;
            }
        }
        return count;
    }
};