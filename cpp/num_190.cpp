class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t y = 0;
        for (int i = 0; i < 32; ++i)
        {
            y = y << 1;
            y += n & 1;
            n = n >> 1;
        }
        return y;
    }
};
