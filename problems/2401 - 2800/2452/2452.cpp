#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector <std::string> twoEditWords(std::vector <std::string>& queries, std::vector <std::string>& dictionary) {
        std::vector <std::string> res;
        std::unordered_map <std::string, int> seen;

        for (std::string& query1 : queries) {
            int cnt = 0;
            for (std::string& query2 : queries) {
                if (query1 == query2) {
                    ++cnt;
                }
            }
            seen[query1] = cnt;
        }

        for (std::string& query : queries) {
            for (std::string& word : dictionary) {
                int cnt = 0;
                if (query.size() != word.size()) {
                    continue;
                }
                for (int i = 0; i < word.size(); ++i) {
                    if (query[i] != word[i]) {
                        ++cnt;
                    }
                }
                if (cnt <= 2 && seen[query]) {
                    res.push_back(query);
                    --seen[query];
                    break;
                }
            }
        }
        return res;
    }
};
