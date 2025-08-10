// Problem : Weekly Contest 462 : Q1. Flip Square Submatrix Vertically

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int i=0; i<k/2; i++) {
            for(int j=0; j<k; j++) {
                swap(grid[x+i][y+j],grid[x+(k-1-i)][y+j]);
            }
        }
        return grid;
    }
};