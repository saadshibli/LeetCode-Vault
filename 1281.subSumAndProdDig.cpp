// Problem : 1281. Subtract the Product and Sum of Digits of an Integer
// Source : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1;
        while(n>0) {
            int num = n%10;
            sum+=num;
            prod*=num;
            n/=10;
        }
        return prod-sum;
    }
};