#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int start = s.size() - 1;
        while (s[start] == ' ') {
            --start;
        }

        int cnt = 0;
        for (int i = start; i >= 0; --i) {
            if (s[i] == ' ') {
                return cnt;
            }
            ++cnt;
        }
        return cnt;
    }
};
