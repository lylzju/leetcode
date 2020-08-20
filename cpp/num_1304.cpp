class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> a;
        for (int i = -n / 2; i <= n / 2; ++i)
        {
            if (i || n & 1)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};
