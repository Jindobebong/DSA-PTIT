#include <bits/stdc++.h>
#define maxn 1025
using namespace std;

int t, V, E, u, v;
vector<int>a[maxn];
bool vis[maxn];

void dfs(int u){
    vis[u] = 1; 
    for(int v : a[u]){
        if(!vis[v]) dfs(v);
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> V >> E;
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        int cnt = 0; 
        for(int i = 1; i <= V; ++i){
            if(!vis[i]){
                ++cnt;
                dfs(i);
            }
        }
        cout << cnt << "\n";
        memset(vis, 0, sizeof vis);
    }
    return 0;
}