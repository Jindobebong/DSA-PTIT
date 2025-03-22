#include <bits/stdc++.h>
#define maxn 1025
using namespace std;

int t, V, E, u, v, x;
vector<int>a[maxn];
bool vis[maxn];
vector<int>res;
void dfs(int u){
    if(!vis[u]) res.push_back(u);
    vis[u] = 1; 
    for(int v : a[u]){
        if(!vis[v]) dfs(v);
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> V >> E >> x;
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            a[u].push_back(v); 
        }
        dfs(x);
        for(int i : res)
            cout << i << " ";
        cout << "\n";
        memset(vis, 0, sizeof vis);
        res.clear();
    }
    return 0;
}