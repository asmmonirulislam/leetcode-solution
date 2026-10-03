// URL: https://leetcode.com/problems/two-sum/submissions/2023111214/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for(int i=0; i<int(nums.size()); i++) {
            int complement = target-nums[i];
            if(mp.find(complement) != mp.end()) {
                return {i, mp[complement]};
            }else {
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};