#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> res(nums.size()); // nums.size() = 2n

        for (int i = 0, j = n, k = 0; i < nums.size() && j < nums.size(); ++k) {
            if (k % 2 == 0) {
                res[k] = nums[i];
                ++i;
            }
            else {
                res[k] = nums[j];
                ++j;
            }
        }

        return res;
    }
};
