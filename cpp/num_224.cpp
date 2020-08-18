class Solution {
public:
    bool should_push(const char &cur_op, const char &stk_top_op)
    {
        switch (cur_op)
        {
        case '+':
            if (stk_top_op == '(')
            {
                return true;
            }
            else
            {
                return false;
            }
        case '-':
            if (stk_top_op == '(')
            {
                return true;
            }
            else
            {
                return false;
            }
        case '*':
            if (stk_top_op == '+' || stk_top_op == '-' || stk_top_op == '(')
            {
                return true;
            }
            else
            {
                return false;
            }
        case '/':
            if (stk_top_op == '+' || stk_top_op == '-' || stk_top_op == '(')
            {
                return true;
            }
            else
            {
                return false;
            }
        case '(':
            return true;
        default:
            return false;
        }
    }

    string infix2postfix(const string &infix)
    {
        string postfix;
        stack<char> op;
        for (const auto &i : infix)
        {
            if (i >= '0' && i <= '9')
            {
                postfix.push_back(i);
            }
            else if (i == ')')
            {
                while (!op.empty() && op.top() != '(')
                {
                    postfix.push_back(op.top());
                    op.pop();
                }
                if (!op.empty())
                {
                    op.pop();
                }
            }
            else if (i == '+' || i == '-' || i == '*' || i == '/' || i == '(')
            {
                postfix.push_back(' ');
                if (op.empty())
                {
                    op.push(i);
                    continue;
                }
                while (!op.empty())
                {
                    if (should_push(i, op.top()))
                    {
                        op.push(i);
                        break;
                    }
                    else
                    {
                        postfix.push_back(op.top());
                        op.pop();
                        if (op.empty())
                        {
                            op.push(i);
                            break;
                        }
                    }
                }
            }
        }
        while (!op.empty())
        {
            postfix.push_back(op.top());
            op.pop();
        }
        return postfix;
    }

    int calculate(string s) {
        string postfix = infix2postfix(s);
        stack<long> st;
        long n = 0;
        for (int i = 0; i < postfix.size(); ++i)
        {
            if (postfix[i] >= '0' && postfix[i] <= '9')
            {
                n = n * 10 + postfix[i] - '0';
                if (i == postfix.size() - 1 || (i < postfix.size() - 1 && !(postfix[i + 1] >= '0' && postfix[i + 1] <= '9')))
                {
                    st.push(n);
                    n = 0;
                }
            }
            else
            {
                long n1 = 0, n2 = 0;
                switch (postfix[i])
                {
                case '+':
                    n1 = st.top();
                    st.pop();
                    n2 = st.top();
                    st.pop();
                    st.push(n2 + n1);
                    break;
                case '-':
                    n1 = st.top();
                    st.pop();
                    n2 = st.top();
                    st.pop();
                    st.push(n2 - n1);
                    break;
                case '*':
                    n1 = st.top();
                    st.pop();
                    n2 = st.top();
                    st.pop();
                    st.push(n2 * n1);
                    break;
                case '/':
                    n1 = st.top();
                    st.pop();
                    n2 = st.top();
                    st.top();
                    st.push(n2 / n1);
                    break;
                default:
                    break;
                }
            }
        }
        return st.top();
    }
};
