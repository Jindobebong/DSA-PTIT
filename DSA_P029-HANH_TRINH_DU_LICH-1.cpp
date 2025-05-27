#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, c[20][20], ans = INT_MAX;
bool vis[20];

void backtrack(int idx, int cost, int cnt){
    if(cost >= ans) return;
    if(cnt == n){
        ans = min(ans, cost);
        return;
    }
    for(int i = 0; i < n; ++i){
        if(!vis[i] && c[idx][i]){
            vis[i] = true;
            backtrack(i, cost + c[idx][i], cnt + 1);
            vis[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cin >> c[i][j];
        ans = INT_MAX;

        for(int i = 0; i < n; ++i){
            memset(vis, 0, sizeof vis);
            vis[i] = true;
            backtrack(i, 0, 1);
        }
        cout << ans << endl;

    }
    return 0;
}