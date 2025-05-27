#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
#define endl "\n"
using namespace std;

int n; 
bool vis[maxn];
vector<int>adj[maxn];
vector<vector<int>>ans;

void dfs(int u, vector<int>path){
    vis[u] = true;
    path.push_back(u);
    int check = 1;
    for(int v : adj[u]){
        if(!vis[v]){
            check = 0;
            dfs(v, path);
        }
    }
    if(check)
        ans.push_back(path);
    path.pop_back();
}
bool cmp(vector<int>a, vector<int>b){
    return a.back() < b.back();
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        cin >> n; 
        memset(vis, 0, sizeof vis);
        for(int i = 1; i <= n; ++i)
            adj[i].clear();
        ans.clear();
        for(int i = 0; i < n - 1; ++i){
            int u, v; cin >> u >> v; 
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>path; 
        dfs(1, path);
        sort(ans.begin(), ans.end(), cmp);
        for(auto x : ans){
            for(int i : x)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}