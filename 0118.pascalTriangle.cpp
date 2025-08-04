// Problem : 118. Pascal's Triangle
// Source : https://leetcode.com/problems/pascals-triangle/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        if(numRows==0) return triangle;
        triangle.push_back({1});
        for(int i=1; i<numRows; i++) {
            vector<int> prevRow = triangle[i-1];
            vector<int> currentRow(i+1, 1);
            for(int j=1; j<i; j++) {
                currentRow[j] = prevRow[j-1] + prevRow[j];
            }
            triangle.push_back(currentRow);
        }
        return triangle;
    }
};