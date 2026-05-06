class Solution {
public:
    int mySqrt(int x) {
        unsigned int start = 1;
        unsigned int end = x;
        while (start <= end) {
            unsigned int mid = start + (end - start) / 2;
            unsigned long long mid2 = (unsigned long long)mid * mid;
            if (mid2 == x) {
                return mid;
            }
            else if (mid2 > x) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return end;
    }
};
