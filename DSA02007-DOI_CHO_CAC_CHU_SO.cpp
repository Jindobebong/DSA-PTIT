#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int k, ans;
string s;
unordered_set<string> visited[11]; // visited[i]: lưu các xâu đã duyệt ở bước i

void backtrack(int idx){
    if (idx > k) return;

    // nếu đã duyệt xâu này tại bước idx thì bỏ qua
    if (visited[idx].count(s)) return;
    visited[idx].insert(s);

    ans = max(ans, stoi(s));
    
    for (int i = 0; i < s.size() - 1; ++i) {
        for (int j = i + 1; j < s.size(); ++j) {
            if (s[j] >= s[i]) { // cắt nhánh: chỉ đổi khi có tiềm năng tăng
                swap(s[i], s[j]);
                backtrack(idx + 1);
                swap(s[i], s[j]);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        cin >> k >> s;
        ans = stoi(s);

        for (int i = 0; i <= k; ++i)
            visited[i].clear();

        backtrack(0);
        cout << ans << endl;
    }

    return 0;
}