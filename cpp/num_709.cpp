class Solution {
public:
    string toLowerCase(string str) {
        for (auto &i : str)
        {
            if (i >= 'A' && i <= 'Z')
            {
                i += ('a' - 'A');
            }
        }
        return str;
    }
};
