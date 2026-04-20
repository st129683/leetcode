#include <unordered_set>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_set <int> nums_set(nums.begin(), nums.end());
        std::vector <int> result(2);
        for (int i = 0; i < nums.size(); ++i) {
        	if (nums_set.find(target - nums[i]) != nums_set.end()) {
        		for (int j = i + 1; j < nums.size(); ++j) {
        			if (nums[i] + nums[j] == target) {
        				result[0] = i, result[1] = j;
        				return result; 
        			}
        		}
        	}
        } 
    }
};
