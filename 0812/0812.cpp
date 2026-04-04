#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int res = 0;
        for (size_t i = 0; i < points.size(); ++i) {
        	for (size_t j = i + 1; j < points.size(); ++j) {
        		int dx1 = points[j][0] - points[i][0];
        		int dy1 = points[j][1] - points[i][1];
        		for (size_t k = j + 1; k < points.size(); ++k) {
        			int dx2 = points[k][0] - points[j][0];
        			int dy2 = points[k][1] - points[j][1];
					int cross = abs(dx1 * dy2 - dy1 * dx2);
					res = max(res, cross);
	        	}
        	}
        }
        return (double) res / 2.0;
    }
};
