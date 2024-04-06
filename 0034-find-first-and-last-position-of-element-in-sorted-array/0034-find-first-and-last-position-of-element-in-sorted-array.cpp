class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool leftBias){
        int left = 0;
        int right = nums.size() - 1;
        int i = -1;
        while(left <= right){
            int m = floor((left + right)/2);
            if(target > nums[m]){
                left = m + 1;
            } else if(target < nums[m]){
                right = m - 1;
            }
            else{
                i = m;
                if(leftBias){
                    right = m - 1;
                } else {
                    left = m + 1;
                }
            }
        }
        return i;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);
        
        return {left, right};
    }
};