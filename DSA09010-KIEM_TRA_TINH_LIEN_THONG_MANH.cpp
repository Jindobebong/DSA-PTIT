#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
#define endl "\n"
using namespace std;

int n, m;
vector<int> adj[maxn], r_adj[maxn];
bool vis[maxn];
stack<int> st;

void inp(){
    cin >> n >> m; 
    for(int i = 0; i < m; ++i){
        int a, b; cin >> a >> b; 
        adj[a].push_back(b);
        r_adj[b].push_back(a);
    }
}

void dfs1(int u){
    vis[u] = true;
    for(int v : adj[u]){
        if(!vis[v]) 
            dfs1(v);
    }
    st.push(u);
}

void dfs2(int u){
    vis[u] = true; 
    for(int v : r_adj[u]){
        if(!vis[v])
            dfs2(v);
    }
}

void scc(){
    int cnt = 0;
    memset(vis, 0, sizeof vis);
    for(int i = 1; i <= n; ++i){
        if(!vis[i]) dfs1(i);
    }
    memset(vis, 0, sizeof vis);
    while(!st.empty()){
        int u = st.top(); st.pop(); 
        if(!vis[u]){
            dfs2(u); 
            ++cnt;
        }
    }
    if(cnt == 1) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        for(int i = 0; i < n; ++i){
            adj[i].clear(); 
            r_adj[i].clear();
        }
        inp();
        scc();
    }
    return 0;
}