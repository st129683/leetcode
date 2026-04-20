#include <vector>

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        for (int i = 0; i < arr.size(); ++i) {
            if (!arr[i]) {
                int carry = arr[i];
                for (int j = i; j + 1 < arr.size(); ++j) {
                    int tmp = arr[j + 1];
                    arr[j + 1] = carry;
                    carry = tmp;
                }
                ++i;
            }
        }
    }
};
