class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> a;
        for (int i = 0; i < A[0].size(); ++i)
        {
            vector<int> b;
            for (int j = 0; j < A.size(); ++j)
            {
                b.push_back(A[j][i]);
            }
            a.push_back(b);
        }
        return a;
    }
};
