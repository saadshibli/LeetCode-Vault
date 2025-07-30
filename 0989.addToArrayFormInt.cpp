// source : "https://leetcode.com/problems/add-to-array-form-of-integer/"

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        vector<int> result;
        while(i>=0||k>0) {
            if(i>=0) k+=num[i];
            result.push_back(k%10);
            k/=10;
            i--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};