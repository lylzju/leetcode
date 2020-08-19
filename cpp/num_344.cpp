class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.empty())
        {
            return;
        }
        auto front = s.begin(), back = s.end() - 1;
        while (front < back)
        {
            char temp = *front;
            *front = *back;
            *back = temp;
            ++front;
            --back;
        }
    }
};
