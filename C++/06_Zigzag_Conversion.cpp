class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows>=s.size() or numRows==1) return s;
        vector<string>ans(numRows);
        int direction=1;
        int row=0;
        for(char ch:s){
            ans[row]+=ch;
            if(row==0) direction=1;
            else if(row == (numRows-1)) direction = -1;
            row+=direction;
        }
        string result="";
        for(string ch:ans){
            result+=ch;
        }
        return result;
    }
};