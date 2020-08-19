class Solution {
public:
    bool isPowerOfFour(int num) {
        while (num)
        {
            if (num == 1)
            {
                return true;
            }
            if (num & 1 || num & 2)
            {
                return false;
            }
            num = num >> 2;
        }
        return false;
    }
};
