class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int max_volume=0;
        while(left<right) {
            int current_volume = min(height[left], height[right])*(right-left);
            max_volume = max(max_volume, current_volume);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return max_volume;
    }
};