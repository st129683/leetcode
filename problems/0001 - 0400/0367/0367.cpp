class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned int start = 1;
        unsigned int end = num;
        while (start <= end) {
            unsigned int mid = start + (end - start) / 2;
            unsigned long long mid2 = (unsigned long long)mid * mid;
            if (mid2 == num) {
                return true;
            }
            else if (mid2 > num) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return false;
    }
};
