class Solution {
public:
    int reverseBits(int n) {
        int a[32] = {0};
		for (int i = 0; i < 32; ++i) {
			a[i] = n % 2;
			n /= 2;
		}

		int res = 0;
		for (int i = 0; i < 32; ++i) {
			res += a[31 - i] * (1 << i);
		}
		return res;
    }
};
