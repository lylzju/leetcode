class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = 0;
        int z = x ^ y;
        while (z)
        {
            if (z & 1)
            {
                ++n;
            }
            z = z >> 1;
        }
        return n;
    }
};
