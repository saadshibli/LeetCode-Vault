// Problem : 326. Power Of Three
// Source : https://leetcode.com/problems/power-of-three/description/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n%3==0) n/=3;
        return n==1;
    }
};