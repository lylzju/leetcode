class Solution {
public:
    bool isPowerOfTwo(int n) {
        while (n)
        {
            if (n == 1)
            {
                return true;
            }
            if (n & 1)
            {
                return false;
            }
            n = n >> 1;
        }
        return false;
    }
};
