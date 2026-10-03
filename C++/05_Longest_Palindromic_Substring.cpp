class Solution {
public:
    string expand(string s, int l, int r){
        while(l>=0 and r<int(s.size()) and s[l]==s[r]) {
            l--;
            r++;
        }
        return s.substr(l+1, r-l-1);
    }
    string longestPalindrome(string s) {
        string max_str = s.substr(0, 1);
        string even, odd;
        for(int i=0; i<int(s.size()); i++) {
            odd = expand(s, i, i);
            even = expand(s, i, i+1);

            if(odd.size() > max_str.size()) {
                max_str = odd;
            }
            if(even.size() > max_str.size()){
                max_str = even;
            }
        }
        return max_str;
    }
};