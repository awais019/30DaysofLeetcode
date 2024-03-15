class Solution {
public:
    int find(vector<int>& nums, int low, int high) {
        if (high <= low)
            return nums[low];

        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[high])
            return find(nums, mid + 1, high);

        return find(nums, low, mid);
    }

    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        return find(nums, low, high);
    }
};