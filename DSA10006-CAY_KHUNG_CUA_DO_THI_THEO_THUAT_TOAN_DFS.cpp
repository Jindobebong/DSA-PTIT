#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
#define endl "\n"
using namespace std;

bool vis[maxn];
vector<vector<int>>adj(maxn);
vector<pair<int, int>>span;

void dfs(int u){
    vis[u] = true; 
    for(int v : adj[u]){
        if(!vis[v]){
            span.push_back({u, v});
            dfs(v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n, m, v; cin >> n >> m >> v; 
        memset(vis, 0, sizeof vis);
        for(int i = 1; i <= n; ++i)
            adj[i].clear();
        span.clear();
        
        for(int i = 0; i < m; ++i){
            int a, b; cin >> a >> b; 
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(v);
        if(span.size() == n - 1){
            for(auto [a, b] : span)
                cout << a << " " << b << endl;
        }
        else 
            cout << -1 << endl;
    }
    return 0;
}