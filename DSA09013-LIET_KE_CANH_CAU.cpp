#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int T, V, E, u, v;
set<int> a[maxn];
bool vis[maxn];
vector<pair<int, int>>dscanh;

void dfs(int u){
    vis[u] = 1; 
    for(int v : a[u])
        if(!vis[v]) dfs(v);
}

int tplt(){
    int cnt = 0; 
    for(int i = 1; i <= V; ++i)
        if(!vis[i]){
            ++cnt;
            dfs(i);
        }
    return cnt;
}

void canh_cau(){
    int cc = tplt(); 
    for(auto x : dscanh){
        int u = x.first, v = x.second;
        memset(vis, 0, sizeof vis);
        a[u].erase(v); 
        a[v].erase(u);
        if(cc < tplt()){
            cout << u << " " << v << " ";
        }
        a[u].insert(v); 
        a[v].insert(u);
    }
}
int main()
{
    cin >> T; 
    while(T--){
        cin >> V >> E; 
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        dscanh.clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v; 
            a[u].insert(v); 
            a[v].insert(u);
            dscanh.push_back({u, v});
        }
        canh_cau();
        memset(vis, 0, sizeof vis);
        cout << "\n";
    }
    return 0;
}