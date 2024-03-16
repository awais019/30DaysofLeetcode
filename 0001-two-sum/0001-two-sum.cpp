class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> pairIdx;
    for (int i = 0; i < nums.size(); i++)
    {
        if (pairIdx.find(target - nums[i]) != pairIdx.end())
        {
            return {i, pairIdx[target - nums[i]]};
        }
        pairIdx[nums[i]] = i;
    }

    return {};
}
};