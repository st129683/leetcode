#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack <char> st;
        for (char& i : s) {
            if (i == '(' || i == '{' || i == '[') {
                st.push(i);
            }
            else if (i == ')') {
                if (st.empty() || st.top() != '(') {
                    return false;
                }
                st.pop();
            }
            else if (i == '}') {
                if (st.empty() || st.top() != '{') {
                    return false;
                }
                st.pop();
            }
            else {
                if (st.empty() || st.top() != '[') {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};