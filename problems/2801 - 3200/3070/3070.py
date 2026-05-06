class Solution:
    def countSubmatrices(self, grid: List[List[int]], k: int) -> int:
        cnt = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if i == 0 and j == 0:
                    pass
                elif i == 0:
                    grid[i][j] += grid[i][j - 1]
                elif j == 0:
                    grid[i][j] += grid[i - 1][j]
                else:
                    grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1]
                cnt += (grid[i][j] <= k)
        return cnt
