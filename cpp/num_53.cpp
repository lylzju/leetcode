class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0, maxSum = INT_MIN;
        for (const int &i : nums)
        {
            currentSum += i;
            maxSum = currentSum > maxSum ? currentSum : maxSum;
            if (currentSum < 0)
            {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};
