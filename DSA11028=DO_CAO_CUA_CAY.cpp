#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define endl "\n"
using namespace std;

int n; 
vector<int>adj[maxn];
bool vis[maxn];
int level[maxn];

void bfs(int u){
    int maxi = 0;
    queue<int>q;
    q.push(u);
    vis[u] = 1;
    level[u] = 0;
    while(!q.empty()){
        int x = q.front(); q.pop();    
        for(int v : adj[x]){
            if(!vis[v]){
                vis[v] = 1; 
                level[v] = level[x] + 1;
                maxi = max(maxi, level[v]);
                q.push(v);
            }
        }    
    }
    cout << maxi << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        cin >> n;
        memset(vis, 0, sizeof vis);
        memset(level, 0, sizeof level);
        for(int i = 1; i <= n; ++i)
            adj[i].clear();
        for(int i = 0; i < n - 1; ++i){
            int u, v; cin >> u >> v;
            adj[u].push_back(v); 
            adj[v].push_back(u);
        }
        bfs(1);
    }
    return 0;
}