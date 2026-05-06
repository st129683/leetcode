#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        std::vector <int> res;
        res.reserve(m + n);
        int idx1 = 0;
        int idx2 = 0;
        while (idx1 != m && idx2 != n) {
            if (nums1[idx1] < nums2[idx2]) {
                res.push_back(nums1[idx1]);
                ++idx1;
            }
            else {
                res.push_back(nums2[idx2]);
                ++idx2;
            }
        }
        if (idx1 == m) {
            for (int i = idx2; i < n; ++i) {
                res.push_back(nums2[i]);
            }
        }
        else {
            for (int i = idx1; i < m; ++i) {
                res.push_back(nums1[i]);
            }
        }
    nums1 = res;
    }
};
