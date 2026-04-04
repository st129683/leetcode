#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        std::vector <int> result(rowIndex + 1, 1);
        getRowHelper(result, rowIndex);
        return result;
    }
private:
    void getRowHelper(std::vector <int>& result, int rowIndex) {
        if (rowIndex <= 1) {
            return;
        }

        getRowHelper(result, rowIndex - 1);
        for (int i = rowIndex - 1; i > 0; --i) {
            result[i] += result[i - 1];
        }
    }
};