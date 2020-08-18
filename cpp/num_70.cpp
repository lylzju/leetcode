class Solution {
public:
    int climbStairs(int n) {
        long a = 1, b = 2;
        for (int i = 0; i < n - 1; ++i)
        {
            long temp = b;
            b += a;
            a = temp;
        }
        return a;
    }
};
