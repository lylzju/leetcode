class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        int temp = x;
        long y = 0;
        while (temp)
        {
            y = y * 10 + temp % 10;
            temp /= 10;
        }
        return x == y ? true : false;
    }
};
