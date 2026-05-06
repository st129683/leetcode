#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0) {
                res[i] = nums[i / 2];
            } else {
                res[i] = nums[n + (i / 2)];
            }
        }
        return res;
    }
};
