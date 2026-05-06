class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        result = [1] * (rowIndex + 1)
        self.getRowHelper(result, rowIndex)
        return result

    def getRowHelper(self, result: List[int], rowIndex: int) -> None:
        if rowIndex < 2:
            return
        self.getRowHelper(result, rowIndex - 1)
        for i in range(rowIndex - 1, -1, -1):
            result[i] += result[i - 1]
