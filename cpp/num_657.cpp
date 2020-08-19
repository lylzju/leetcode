class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0, u = 0;
        for (const auto &i : moves)
        {
            switch (i)
            {
            case 'R': ++r; break;
            case 'L': --r; break;
            case 'U': ++u; break;
            case 'D': --u; break;
            default: break;
            }
        }
        return (!r && !u);
    }
};
