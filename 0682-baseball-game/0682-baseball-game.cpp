class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score = 0;
        stack<int> st;
        for (string op : operations) {
            if (op == "+") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
                score += (a + b);
            } else if (op == "D") {
                st.push(2 * st.top());
                score += st.top();
            } else if (op == "C") {
                score -= st.top();
                st.pop();
            }else{
                st.push(stoi(op));
                score+=st.top();
            }
        }
        return score;
    }
};