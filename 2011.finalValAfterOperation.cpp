// Problem : Final Value of Variable After Performing Operations
// Source : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/

//Optimized
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(const string& op:operations) {
            if(op[1]=='+') x++;
            else x--;
        }
        return x;
    }
};

//Brute Force
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0; i<operations.size(); i++) {
            string str = operations[i];
            if(str=="--X"||str=="X--") x--;
            else x++;
        }
        return x;
    }
};