class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        temp = x
        y = 0
        while temp:
            y = y * 10 + temp % 10
            temp = temp // 10
        if x == y:
            return True
        else:
            return False
