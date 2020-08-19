class Solution {
public:
    int fib(int N) {
        int a = 0, b = 1;
        for (int i = 0; i < N; ++i)
        {
            int temp = b;
            b += a;
            a = temp;
        }
        return a;
    }
};
