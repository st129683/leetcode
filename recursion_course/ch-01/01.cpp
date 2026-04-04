#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        if (s.size() <= 1) {
            return;
        }
        reverseHelper(s, 0, s.size() - 1);
    }
private:
    void reverseHelper(std::vector<char>& s, int start, int end) {
        if (end <= start) {
            return;
        }
        std::swap(s[start], s[end]);
        reverseHelper(s, start + 1, end - 1);
    }
};
