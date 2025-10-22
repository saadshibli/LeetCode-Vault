// Problems : 412. Fizz Buzz
// Source : https://leetcode.com/problems/fizz-buzz/description/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        int i=1;
        while(n!=0) {
            if(i%3==0 && i%5==0) answer.push_back("FizzBuzz");
            else if(i%5==0) answer.push_back("Buzz");
            else if(i%3==0) answer.push_back("Fizz");
            else answer.push_back(to_string(i));
            n--;
            i++;
        }
        return answer;
    }
};