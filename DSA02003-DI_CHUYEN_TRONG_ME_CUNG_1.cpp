#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, a[15][15];
bool vis[15][15];
vector<string>ans;
void backtrack(int i, int j, string path){
    if(i == n && j == n){
        ans.push_back(path);
        return;
    }

    if(a[i + 1][j] == 1 && i + 1 <= n && !vis[i + 1][j]){
        vis[i + 1][j] = 1;
        backtrack(i + 1, j, path + 'D');
        vis[i + 1][j] = 0;

    }
    if(a[i][j + 1] == 1 && j + 1 <= n && !vis[i][j + 1]){
        vis[i][j + 1] = 1;
        backtrack(i, j + 1, path + 'R');
        vis[i][j + 1] = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        ans.clear();
        memset(vis, 0, sizeof vis);
        memset(a, 0, sizeof a);
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        }
        if(a[1][1] == 1){
            backtrack(1, 1, "");
        }

        if(ans.empty())
            cout << -1; 
        else{
            for(auto x : ans)
                cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}

/*
void backtrack(int i, int j, string path) {
    if (i == N-1 && j == N-1) {
        lưu path vào kết quả
        return;
    }
    // Nhánh cận: thử đi xuống trước (D) để đảm bảo thứ tự từ điển
    nếu có thể đi xuống (i+1, j): 
        mark đã đi → gọi backtrack(i+1, j, path + 'D') → unmark
    nếu có thể đi phải (i, j+1):
        mark đã đi → gọi backtrack(i, j+1, path + 'R') → unmark
}
*/