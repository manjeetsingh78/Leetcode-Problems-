/*
 * @lc app=leetcode id=1390 lang=cpp
 *
 * [1390] Four Divisors
 */

// @lc code=start
class Solution {
public:
    int getDivisorSum(int a){
        int cnt = 0;
        int sum = 0;
        for(int i = 1;i<=sqrt(a);i++){
            if(a % i == 0){
                cnt++;
                sum += i;
                if(i != a / i){
                    cnt++;
                    sum += a / i;
                }
            }
            if(cnt > 4) return 0;
        }
        if(cnt == 4) return sum;
        return 0;
    }
    
    int sumFourDivisors(vector<int>& nums) {
        long long sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += getDivisorSum(nums[i]);

        }
        return sum;
    }
};
// @lc code=end

