class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m1;
        for (const int &i : arr)
        {
            ++m1[i];
        }
        unordered_map<int, int> m2;
        for (const auto &i : m1)
        {
            ++m2[i.second];
            if (m2[i.second] > 1)
            {
                return false;
            }
        }
        return true;
    }
};
