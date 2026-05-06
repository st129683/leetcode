#include <string>
#include <vector>
#include <stack>

class Solution {
public:
    int calPoints(std::vector <std::string>& operations) {
        std::stack <int> st;
        for (std::string& op : operations) {
            if (op == "C") {
                st.pop();
            }
            else if (op == "D") {
                int tmp = st.top();
                st.push(2 * tmp);
            }
            else if (op == "+") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
            }
            else {
                st.push(std::stoi(op));
            }
        }
        int res = 0;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        return res;
    }
};
