class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> n;
        for (int i = left; i <= right; ++i)
        {
            int temp = i;
            while (temp)
            {
                if (!(temp % 10) || i % (temp % 10))
                {
                    break;
                }
                temp /= 10;
                if (!temp)
                {
                    n.push_back(i);
                }
            }
        }
        return n;
    }
};
