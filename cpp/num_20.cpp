class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for (const auto &i : s)
        {
            switch (i)
            {
            case '(':
            case '[':
            case '{':
                a.push(i);
                break;
            case ')':
                if (!a.empty() && a.top() == '(')
                {
                    a.pop();
                    break;
                }
                else
                {
                    return false;
                }
            case ']':
                if (!a.empty() && a.top() == '[')
                {
                    a.pop();
                    break;
                }
                else
                {
                    return false;
                }
            case '}':
                if (!a.empty() && a.top() == '{')
                {
                    a.pop();
                    break;
                }
                else
                {
                    return false;
                }
            default:
                break;
            }
        }
        return a.empty() ? true : false;
    }
};
