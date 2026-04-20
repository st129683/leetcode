#include <climits>

class Solution {
public:
    int reverse(int x) {
        const int upper_bound = INT_MAX / 10;
        const int lower_bound = INT_MIN / 10;

        int res = 0;
        while (x) {
            int last_digit = x % 10;
            if (res > upper_bound || res < lower_bound) {
                return 0;
            }
            res = 10u * res + last_digit;
            x /= 10;
        }
        return res;
    }
};
