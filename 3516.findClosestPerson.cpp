// Problem : 3516. Find Closest Person
// Source : https://leetcode.com/problems/find-closest-person/

class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1=abs(x-z);
        int p2=abs(y-z);
        if(p1<p2) return 1;
        if(p2<p1) return 2;
        return 0;
    }
};