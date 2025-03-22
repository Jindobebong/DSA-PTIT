#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int t, n, m, u, v, q, x, y;
vector<int> a[maxn];
bool vis[maxn];

void dfs(int u){
    vis[u] = 1; 
    for(int v : a[u])
        if(!vis[v]) dfs(v);
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        for(int i = 1; i <= m; ++i){
            cin >> u >> v; 
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        cin >> q; 
        while(q--){
            cin >> x >> y; 
            dfs(x); 
            if(!vis[y]) cout << "NO";
            else cout << "YES"; 
            cout << "\n";
            memset(vis, 0, sizeof vis);
        }
        for(int i = 1; i <= n; ++i)
            a[i].clear();
    }
    return 0;
}