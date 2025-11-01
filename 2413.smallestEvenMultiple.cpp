// Problem : 2413. Smallest Even Multiple
// Source : https://leetcode.com/problems/smallest-even-multiple/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int num;
        for(int i=1; i<n*2; i++) {
            if(i%2==0 && i%n==0) {
                num=i;
                break;
            }
        }
        return num;
    }
};