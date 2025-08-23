// Problem : 2469. Convert the Temperature
// Source : https://leetcode.com/problems/convert-the-temperature/description/

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double K = celsius + 273.15;
        double F = celsius * 1.80 + 32.00;
        ans.push_back(K);
        ans.push_back(F);
        return ans;
    }
};