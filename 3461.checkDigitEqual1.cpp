// Problem : 3461. Check If Digits Are Equal in String After Operations I
// Source : https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/description/


//Optimized Approach
class Solution {
public:
    bool hasSameDigits(string s) {
        for(int i=s.length()-1; i>1; i--) {
            for(int j=0; j<i; j++) {
                int a = s[j]-'0';
                int b = s[j+1]-'0';
                s[j] = ((a+b)%10)+'0';
            }
        }
        return s[0]==s[1];
    }
};


//Not Optimized Approach
class Solution {
public:
    bool hasSameDigits(string s) {
        int l = s.length();
        if(l==2 && s[0]==s[1]) return true;
        if(l==2 && s[0]!=s[1]) return false;
        string str;
        do{
            str="";
            for(int i=0; i<s.length()-1; i++) {
                str+=to_string(((s[i]-'0')+(s[i+1]-'0'))%10);
            }
            s=str;
        } while(str.length()!=2);
        if(s[0]==s[1]) return true;
        return false;
    }
};