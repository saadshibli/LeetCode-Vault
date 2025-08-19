// Problem : 2894. Divisible and Non-divisible Sums Difference
// Source : https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int s1=0, s2=0;
        for(int i=1; i<=n; i++) {
            if(i%m!=0) s1+=i;
            else s2+=i;
        }
        return s1-s2;
    }
};