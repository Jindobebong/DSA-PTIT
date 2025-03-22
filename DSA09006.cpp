#include <bits/stdc++.h>
#define maxn 1025
using namespace std;

int t, V, E, u, v, s, x;
vector<int>a[maxn];
bool vis[maxn];
vector<int>res;
int parent[maxn];

void dfs(int u){
    // if(!vis[u])
    //     if(u == t) return;
    vis[u] = 1; 
    for(int v : a[u]){
        if(!vis[v]) {
            parent[v] = u;
            dfs(v);
        }
    }
}

void path(int s, int t){
    if(parent[t] == -1) cout << -1;
    else{
        while(s != t){
            res.push_back(t); 
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int i : res)
            cout << i << " ";
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> V >> E >> s >> x;
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        dfs(s);
        path(s, x);
        cout << "\n";
        memset(vis, 0, sizeof vis);
        memset(parent, -1, sizeof parent);
        res.clear();
    }
    return 0;
}