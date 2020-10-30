class Solution:
    def climbStairs(self, n: int) -> int:
        a, b = 1, 2
        for i in range(0, n - 1):
            a, b = b, a + b
        return a
