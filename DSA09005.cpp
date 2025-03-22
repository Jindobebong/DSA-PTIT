#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int t;
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
        for(int v : a[x]){
            if(!vis[v]){
                vis[v] = 1; 
                q.push(v); 
                res.push_back(v);
            }
        }
    }
    for(int i : res)
        cout << i << " ";
}
int main()
{
    cin >> t; 
    while(t--){
        int v, e, u; cin >> v >> e >> u;
        for(int i = 1; i <= v; ++i)
            a[i].clear();
        for(int i = 1; i <= e; ++i){
            int x, y; cin >> x >> y; 
            a[x].push_back(y); 
            a[y].push_back(x);
        }
        bfs(u);
        res.clear();
        memset(vis, 0, sizeof vis);
        cout << "\n";
    }
    return 0;
}