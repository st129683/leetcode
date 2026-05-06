#include <string>

class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        for (int i = 0; i < s.size(); ++i) {
            s = s.substr(1, s.size() - 1) + s.substr(0, 1);
            if (s == goal) {
                return true;
            }
        }
        return false;
    }
};
