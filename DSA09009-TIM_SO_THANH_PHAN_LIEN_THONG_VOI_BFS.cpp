#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int t, V, E, u, v;
vector<int>a[maxn];
bool vis[maxn];

void bfs(int u){
    queue<int>q; 
    q.push(u); 
    vis[u] = 1; 
    while(!q.empty()){
        int x = q.front(); 
        q.pop(); 
        for(int i : a[x]){
            if(!vis[i]){
                vis[i] = 1; 
                q.push(i);
            }
        }
    }
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> V >> E; 
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i)
        {
            cin >> u >> v; 
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        int cnt = 0; 
        for(int i = 1; i <= V; ++i){
            if(!vis[i]){
                ++cnt;
                bfs(i);
            }
        }
        cout << cnt << "\n";
        memset(vis, 0, sizeof vis);
    }
    return 0;
}