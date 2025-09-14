// Problem : 2520. Count the Digits That Divide a Number
// Source : https://leetcode.com/problems/count-the-digits-that-divide-a-number/

class Solution {
public:
    int countDigits(int num) {
        int count=0,nums=num;
        while(num>0) {
            int n = num%10;
            if(nums%n==0) count++;
            num/=10;
        }
        return count;
    }
};