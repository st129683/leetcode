#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int i = 0, j = 1;
        while (i < nums.size() && j < nums.size()) {
            if (nums[j] != nums[i]) {
                nums[i + 1] = nums[j];
                ++i;
            }
            ++j;
        }

        return i + 1;
    }
};