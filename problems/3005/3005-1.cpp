#include <vector>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};
        int curr_max = 0;
        for (int i : nums) {
                ++freq[i];

			if (freq[i] > curr_max)
				curr_max = freq[i];
        }

        int res = 0;
		for (int i = 0; i < 101; ++i) {
			if (freq[i] == curr_max)
				res += curr_max;
		}

		return res;
    }
};
