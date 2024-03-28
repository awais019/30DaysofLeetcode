class Solution {
public:
    int climbStairs(int n) {
        int one = 1;
        int two = 1;
        for(int i = 0; i < n - 1; i++){
            int ways = one + two;
            two = one;
            one = ways;
        }
        
        return one;
    }
};