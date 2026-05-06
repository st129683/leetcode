class Solution:
    def twoEditWords(self, queries: List[str], dictionary: List[str]) -> List[str]:
        res: List[str] = []
        seen: dict[str, int] = {query: queries.count(query) for query in queries}
        for query in queries:
            for word in dictionary:
                cnt = 0
                if len(query) != len(word):
                    pass
                for i in range(len(word)):
                    if query[i] != word[i]:
                        cnt += 1
                if cnt <= 2 and seen[query]:
                    res.append(query)
                    seen[query] -= 1
                    break
        return res
