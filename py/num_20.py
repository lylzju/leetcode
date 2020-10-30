class Solution:
    def isValid(self, s: str) -> bool:
        a = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                a.append(i)
            elif i == ')':
                if a and a[-1] == '(':
                    a.pop()
                else:
                    return False
            elif i == ']':
                if a and a[-1] == '[':
                    a.pop()
                else:
                    return False
            elif i == '}':
                if a and a[-1] == '{':
                    a.pop()
                else:
                    return False
            else:
                pass
        if not a:
            return True
        else:
            return False
