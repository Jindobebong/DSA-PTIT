#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int T, V, E;
vector<int> a[maxn];
bool vis[maxn];

void dfs(int u){
    vis[u] = 1; 
    for(int v : a[u]){
        if(!vis[v]) dfs(v);
    }
}
int tplt(){
    int cnt = 0; 
    for(int i = 1; i <= V; ++i){
        if(!vis[i]){
            ++cnt; 
            dfs(i);
        }
    }
    return cnt;
}

void dinh_tru(){
    int cc = tplt();
    for(int i = 1; i <= V; ++i){
        memset(vis, 0, sizeof vis);
        vis[i] = 1; // danh dau de k duyet vao
        if(cc < tplt())
            cout << i << " ";
    }
}
int main()
{
    cin >> T;
    while(T--){
        cin >> V >> E;
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            int u, v; cin >> u >> v; 
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        memset(vis, 0, sizeof vis);
        dinh_tru();
        cout << "\n";

    }
    return 0;
}