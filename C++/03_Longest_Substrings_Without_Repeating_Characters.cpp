class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int>mp;
        int n=s.size(), left=0, maxLength=0;
        for(int right=0; right<n; right++) {
            mp[s[right]]++;
            while(mp[s[right]]>1) {
                mp[s[left]]--;
                if(mp[s[left]]==0) mp.erase(s[left]);
                left++;
            }
            maxLength = max(maxLength, right-left+1);
        }
        return maxLength;
    }
};