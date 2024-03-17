class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> set;
        for(int i = 0; i < nums.size(); i++){
            if(set.find(nums[i]) != set.end()){
                return true;
            } else {
                set[nums[i]] = nums[i];
            }
        }
        return false;
    }
};