class Solution {
public:
    int myAtoi(string s) {
        int i=0, sign=1;
        long long rev=0;
        while(i<s.size() and s[i]==' '){
            i++;
        }
        if(i==s.size()) return 0;
        if(s[i]=='-') {
            sign = -1;
            i++;
        }else if(s[i]=='+') i++;
        while(i<s.size() and isdigit(s[i])) {
            rev = (rev*10)+s[i]-'0';
            if(rev*sign < INT_MIN) return INT_MIN;
            if(rev*sign > INT_MAX) return INT_MAX;
            i++;
        }
        rev*=sign;
        return (int)rev;
    }
};