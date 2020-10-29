class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a = []
        d = {}
        for i in range(0, len(nums)):
            if d.get(target - nums[i]) == None:
                d[nums[i]] = i
            else:
                a.append(d[target - nums[i]])
                a.append(i)
                break
        return a
