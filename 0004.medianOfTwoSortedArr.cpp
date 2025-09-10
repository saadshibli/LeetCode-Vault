// Problem : 4. Median of Two Sorted Arrays
// Source : https://leetcode.com/problems/median-of-two-sorted-arrays/description/



//Not Optimized
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;
        int m=nums1.size(), n=nums2.size();
        for(int i=0; i<m; i++) num.push_back(nums1[i]);
        for(int i=0; i<n; i++) num.push_back(nums2[i]);
        sort(num.begin(), num.end());
        int s=n+m;
        if(s%2==0) return (double)(num[s/2]+num[(s/2)-1])/2;
        else return (double)num[s/2];
    }
};