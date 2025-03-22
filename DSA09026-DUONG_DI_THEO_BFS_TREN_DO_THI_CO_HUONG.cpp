#include <bits/stdc++.h>
#define maxn 1025
using namespace std;

int t, V, E, u, v, s, x;
vector<int>a[maxn];
bool vis[maxn];
vector<int>res;
int parent[maxn];

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
                parent[i] = x;
            }
        }
    }
}

void path(int s, int t){
    if(!vis[t]) cout << -1;
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
        }
        bfs(s);
        path(s, x);
        cout << "\n";
        memset(vis, 0, sizeof vis);
        memset(parent, -1, sizeof parent);
        res.clear();
    }
    return 0;
}