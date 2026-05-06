#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector <long long> distance(std::vector <int>& nums) {
        std::vector <long long> arr(nums.size());
        std::unordered_map <int, std::vector<int>> map;
        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]].push_back(i);
        }

        for (int i = 0; i < nums.size(); ++i) {
            unsigned int cnt = 0u;
            for (const int& j : map[nums[i]]) {
                cnt += std::abs(j - i);
            }
            arr[i] = (long long) cnt;
        }

        return arr;
    }
};
