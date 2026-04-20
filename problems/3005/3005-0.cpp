#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int, int> freq;
        int curr_max = 0;
        for (int i : nums) {
        	if (freq.find(i) == freq.end())
        		freq[i] = 1;
        	else
        		freq[i] += 1;

        	if (freq[i] > curr_max)
        		curr_max = freq[i];
        }

		int res = 0;
		for (auto [k, v] : freq) {
			if (v == curr_max)
				res += v;
		}
		return res;
    }
};
