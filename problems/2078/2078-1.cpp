#include <vector>

class Solution {
public:
    int maxDistance(std::vector<int>& colors) {
        int res = 0;

        int n = colors.size() - 1;
        int i = n;
        while (colors[0] == colors[i]) {
            --i;
        }
        res = std::max(res, i);

        i = 0;
        while (colors[i] == colors[n]) {
            ++i;
        }
        res = std::max(res, n - i);

        return res;
    }
};
