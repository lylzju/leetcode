class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (m.find(target - nums[i]) == m.end())
            {
                m[nums[i]] = i;
            }
            else
            {
                a.push_back(m[target - nums[i]]);
                a.push_back(i);
                break;
            }
        }
        return a;
    }
};
