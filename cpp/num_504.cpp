class Solution {
public:
    string convertToBase7(int num) {
        int n = num < 0 ? -num : num;
        string s;
        do
        {
            s.push_back('0' + n % 7);
            n /= 7;
        } while (n);
        reverse(s.begin(), s.end());
        return num < 0 ? "-" + s : s;
    }
};
