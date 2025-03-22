#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
using namespace std;

int t, n, m, ok;
vector<int>a[maxn];
bool vis[maxn];
int parent[maxn];

vector<int>res;
bool dfs(int u){
    vis[u] = 1;
    for(int v : a[u]){
        if(!vis[v]){
            parent[v] = u;
            if(dfs(v)) return true;
        }
        else if(v != parent[u]){
            //x = u, y = v;
            ok = 1;
            int x = u;
            while(x != v){
                res.push_back(x);
                x = parent[x]; 
            }
            res.push_back(v);
            return true;
        }
    }
    return false;
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        for(int i = 1; i <= n; ++i)
            a[i].clear(); 
        memset(vis, 0, sizeof vis);
        memset(parent, -1, sizeof parent);
        res.clear();
        for(int i = 1; i <= m; ++i)
        {
            int u, v; cin >> u >> v; 
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i = 1; i <= n; ++i)
            sort(a[i].begin(), a[i].end());
        ok = 0;
        dfs(1);
        //cout << x << y; 
        if(!ok) cout << "NO"; 
        else{
            reverse(res.begin(), res.end()); 
            for(int x : res)
                cout << x << " ";
            cout << 1;
        }
        cout << "\n";
    }
    return 0;
}
/*
1
6 9
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
*/