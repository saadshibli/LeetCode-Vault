// Problem : 1431. Kids With the Greatest Number of Candies
// Source : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int g = *max_element(candies.begin(), candies.end());
        vector<bool> gC;
        for(int c:candies) {
            if((c+extraCandies)>=g) {
                gC.push_back(true);
            } else {
                gC.push_back(false);
            }
        }
        return gC;
   }
};