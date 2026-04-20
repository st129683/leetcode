#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        for (int i = 0; i < s.size(); ++i) {
        	if (s[i] != s[s.size() - i - 1]) {
        		return false;
        	}
        }
        return true;
    }
};
