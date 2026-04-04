#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        if (nums.empty()) {
            return 0;
        }
        int i = 0;
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[i] == val) {
                nums[i] = nums[j];
            }
            else if (nums[j] != val) {
                nums[i + 1] = nums[j];
                ++i;
            }
        }
        return i + 1;
    }
};