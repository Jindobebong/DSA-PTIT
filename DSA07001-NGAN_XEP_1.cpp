#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    stack<int> st;  // Stack lưu trữ số nguyên

    while (cin >> s) {
        if (s == "push") {
            int x;
            cin >> x;
            st.push(x);
        } 
        else if (s == "pop") {
            if (!st.empty()) 
                st.pop();
        } 
        else if (s == "show") {
            if (st.empty()) {
                cout << "empty\n";
            } 
            else {
                vector<int> v;
                stack<int> temp = st; // Sao chép stack để in mà không làm mất dữ liệu
                while (!temp.empty()) {
                    v.push_back(temp.top());
                    temp.pop();
                }
                reverse(v.begin(), v.end()); // Đảo ngược để in theo thứ tự lưu trữ
                for (int x : v) {
                    cout << x << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
