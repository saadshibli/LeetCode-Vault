// Problem : 2037. Minimum Number of Moves to Seat Everyone
// Source : https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int s = seats.size();
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int moves=0;
        for(int i=0; i<s; i++) {
            int m = seats[i]-students[i];
            if(m<0) m*=-1;
            moves+=m;
        }
        return moves;
    }
};