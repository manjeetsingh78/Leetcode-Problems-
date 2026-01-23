/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;
        for(int i = 0;i < n; i++){
            if(i > maxReach) return false;
            int candidate = i + nums[i];
            maxReach = (candidate > maxReach) ? candidate : maxReach;
            if(maxReach >= n-1) return true;
        }
        return true;
    }
};
// @lc code=end

