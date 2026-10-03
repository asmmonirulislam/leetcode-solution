// URL: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp1=x, temp2=0;
        while(x){
            int rem = x%10;
            temp2 = (temp2*10)+rem;
            x/=10;
        }
        if(temp1==temp2) return true;
        return false;
    }
};