class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto &i : A)
        {
            reverse(i.begin(), i.end());
            for (int &j : i)
            {
                j = !j;
            }
        }
        return A;
    }
};
