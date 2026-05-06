#include <string>

class Solution {
public:
    bool judgeCircle(std::string moves) {
        int x = 0;
        int y = 0;
        for (const char& i : moves) {
            if (i == 'U')
                ++y;
            else if (i == 'D')
                --y;
            else if (i == 'R')
                ++x;
            else
                --x;
        }
        return (!x && !y);
    }
};
