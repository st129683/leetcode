#include <cmath>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN || x == INT_MAX || x == 0) {
            return 0;
        }
        long long n = (long long) x;
        int cnt = 0;
        while (n) {
            ++cnt;
            n /= 10ll;
        }
        long long res = 0;
        for (int i = cnt - 1; i >= 0; --i) {
            res += ((long long) x % 10ll) * std::pow(10, i);
            x /= 10ll;
        }
        if (res > INT_MAX || res < INT_MIN) {
            return 0;
        }
        return res;
    }
};