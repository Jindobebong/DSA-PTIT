#include <bits/stdc++.h>
#define maxn 1025
using namespace std;

int t, V, E, u, v, x;
vector<int>a[maxn];
bool vis[maxn];
vector<int>res;

void bfs(int u){
    queue<int>q; 
    q.push(u); 
    res.push_back(u);
    vis[u] = 1;
    while(!q.empty()){
        int x = q.front(); 
        q.pop();
        for(int i : a[x]){
            if(!vis[i]){
                res.push_back(i);
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
        cin >> V >> E >> x;
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            a[u].push_back(v); 
        }
        bfs(x);
        for(int i : res)
            cout << i << " ";
        cout << "\n";
        memset(vis, 0, sizeof vis);
        res.clear();
    }
    return 0;
}