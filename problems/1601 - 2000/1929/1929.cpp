#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        nums.reserve(2 * nums.size());
        for (int& i : nums) {
            nums.push_back(i);
        }
        return nums;
    }
};