class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while(x){
            rev = (rev*10)+(x%10);
            x/=10;
        }
        if(rev > INT_MIN and rev < INT_MAX){
            return (int)rev;
        }
        return 0;
    }
};