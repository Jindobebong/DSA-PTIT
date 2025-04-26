#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, m, n, a[105][105]; 
bool vis[105][105];
vector<string>ans;

void backtrack(int i, int j, string path){
    if(i == m && j == n){
        ans.push_back(path);
        return;
    }

    if(i + 1 <= m && !vis[i + 1][j]){
        vis[i + 1][j] = 1;
        backtrack(i + 1, j, path + 'D');
        vis[i + 1][j] = 0;
    }
    if(j + 1 <= n && !vis[i][j + 1]){
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
        cin >> m >> n; 
        memset(a, 0, sizeof a);
        memset(vis, 0, sizeof vis); 
        ans.clear();
        for(int i = 1; i <= m; ++i)
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        
        backtrack(1, 1, ""); 
        cout << ans.size() << endl;
    }
    return 0;
}