class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = 0, sum = 0;
        for (const int &i : nums)
        {
            ++n;
            sum += i;
        }
        return n * (n + 1) / 2 - sum;
    }
};
