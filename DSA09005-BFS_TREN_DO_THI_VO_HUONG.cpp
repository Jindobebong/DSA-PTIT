#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

bool vis[1005];
vector<vector<int>>ke(1005);

void bfs(int u){
    queue<int>q;
    q.push(u);
    vis[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        cout << x << " ";
        for(int y : ke[x]){
            if(!vis[y]){
                vis[y] = true;
                q.push(y);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int V, E, u, v, U; cin >> V >> E >> U; 
        memset(vis, 0, sizeof vis);
        ke.assign(1005, vector<int>());
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        bfs(U);
        cout << endl;
    }
    return 0;
}