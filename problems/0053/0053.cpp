#include <algorithm>
#include <vector>

class Solution {
public:
    int maxSubArray(std::vector <int>& nums) {
        int curr_max = nums[0];
        int global_max = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            curr_max = std::max(curr_max + nums[i], nums[i]);
            global_max = std::max(global_max, curr_max);
        }
        return global_max;
    }
};
