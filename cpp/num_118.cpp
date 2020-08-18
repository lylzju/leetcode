class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        if (!numRows)
        {
            return a;
        }
        a.push_back({1});
        for (int i = 1; i < numRows; ++i)
        {
            vector<int> b{1};
            for (int j = 1; j < i; ++j)
            {
                b.push_back(a[i - 1][j - 1] + a[i - 1][j]);
            }
            b.push_back(1);
            a.push_back(b);
        }
        return a;
    }
};
