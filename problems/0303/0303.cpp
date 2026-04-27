#include <vector>

class NumArray {
private:
    std::vector <int> prefs;

public:
    NumArray(std::vector <int>& nums) {
        if (nums.empty())
            return;
        prefs.reserve(nums.size());
        prefs[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            prefs[i] = prefs[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        if (left == 0)
            return prefs[right];
        return prefs[right] - prefs[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */