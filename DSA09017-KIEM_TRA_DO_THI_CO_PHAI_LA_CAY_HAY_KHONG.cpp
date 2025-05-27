#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

vector<vector<int>>adj;
bool vis[1005];
int n; 
void dfs(int u){
    vis[u] = true; 
    for(int v : adj[u]){
        if(!vis[v]) dfs(v);
    }
}

int tplt(){
    int cnt = 0; 
    for(int i = 1; i <= n; ++i){
        if(!vis[i]){
            ++cnt; 
            dfs(i);
        }
    }
    return cnt == 1;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        cin >> n; 
        memset(vis, 0, sizeof vis);
        adj.assign(n + 1, vector<int>());

        for(int i = 1; i < n; ++i){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if(tplt()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}