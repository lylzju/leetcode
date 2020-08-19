class Solution {
public:
    int tribonacci(int n) {
        unsigned int a = 0, b = 1, c = 1;
        for (int i = 0; i < n / 3; ++i)
        {
            a += (b + c);
            b += (c + a);
            c += (a + b);
        }
        switch (n % 3)
        {
        case 0: return a;
        case 1: return b;
        case 2: return c;
        default: return -1;
        }
    }
};
