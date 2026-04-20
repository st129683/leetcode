#include <string>
#include <cmath>


class Solution {
public:
  int findNthDigit(int n) {
    int digits = 1;
    while (9 * f(digits) < n) {
      ++digits;
    }

    long long lower_bound = 9 * f(digits - 1) + 1;

    std::string s;
    for (long long i = pow(10, digits - 1); i < pow(10, digits); ++i) {
      s += std::to_string(i);
    }
    return s[n - lower_bound] - '0';
  }
private:
    long long f(int n) {
        long long res = 0;
        for (int i = 0; i < n; ++i) {
            res += (i + 1) * pow(10, i);
        }
        return res;
    }
};
