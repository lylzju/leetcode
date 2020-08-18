class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (const int &i : nums)
        {
            x ^= i;
        }
        return x;
    }
};
