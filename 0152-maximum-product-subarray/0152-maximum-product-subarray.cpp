class Solution {
public:
        int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < 0)
            {
                swap(maxProduct, minProduct);
            }
            maxProduct = max(nums[i], maxProduct * nums[i]);
            minProduct = min(nums[i], minProduct * nums[i]);
            result = max(result, maxProduct);
        }
        return result;
    }
};