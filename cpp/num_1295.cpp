class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i : nums)
        {
            int dig = 0;
            do
            {
                ++dig;
                i /= 10;
            } while (i);
            if (!(dig & 1))
            {
                ++count;
            }
        }
        return count;
    }
};
