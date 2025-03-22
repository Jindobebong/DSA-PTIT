#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int T, V, E, u, v; 
vector<int>a[maxn];
bool vis[maxn];
int parent[maxn];

bool dfs(int u){
    vis[u] = 1; 
    for(int v : a[u]){
        if(!vis[v]){
            parent[v] = u;
            if(dfs(v)) return true;
        }
        else if(v != parent[u])
            return true;
    }
    return false;
}

int main()
{
    cin >> T; 
    while(T--){
        cin >> V >> E; 
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            a[u].push_back(v);
            a[v].push_back(u);
        }
        memset(vis, 0, sizeof vis);
        bool ok = 0; 
        for(int i = 1; i <= V; ++i){
            if(!vis[i]){
                if(dfs(i)){
                    ok = 1;
                    break;
                }
            }
        }
        if(ok) cout << "YES\n"; 
        else cout << "NO\n";
    }
    return 0;
}