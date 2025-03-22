#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int T, V, E, s, t, u, v;
vector<int>a[maxn];
bool vis[maxn]; 
int parent[maxn];

void bfs(int u){
    queue<int>q; 
    q.push(u); 
    vis[u] = 1; 
    while(!q.empty()){
        int x = q.front(); 
        q.pop(); 
        for(int v : a[x]){
            if(!vis[v]){
                q.push(v);
                parent[v] = x;
                vis[v] = 1;
            }
        }
    }
}

vector<int>res;

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
    cin >> T; 
    while(T--){
        cin >> V >> E >> s >> t; 
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        bfs(s);
        path(s, t);
        cout << "\n"; 
        res.clear();
        memset(vis, 0, sizeof vis);
        memset(parent, -1, sizeof parent);
    }
    return 0;
}