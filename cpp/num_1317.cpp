class Solution {
public:
    bool noZero(int x)
    {
        do
        {
            if (!(x % 10))
            {
                return false;
            }
            x /= 10;
        } while (x);
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> a;
        for (int i = 1; i <= n / 2; ++i)
        {
            if (noZero(i) && noZero(n - i))
            {
                a.push_back(i);
                a.push_back(n - i);
                break;
            }
        }
        return a;
    }
};
