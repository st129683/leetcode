#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int cnt = 0;
        for (unsigned int i = 0; i < grid.size(); ++i) {
            for (unsigned int j = 0; j < grid[i].size(); ++j) {
                if (i == 0 && j == 0)
                    continue;
                else if (i == 0)
                    grid[i][j] += grid[i][j - 1];
                else if (j == 0)
                    grid[i][j] += grid[i - 1][j];
                else
                    grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1];

				cnt += (grid[i][j] <= k);
            }
        }

        return cnt;
    }
};
