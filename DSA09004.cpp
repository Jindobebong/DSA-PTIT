#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int T, v, e, u;
vector<int> a[maxn];
bool vis[maxn];
vector<int> res;
void dfs(int u){
    vis[u] = 1; 
    res.push_back(u); 
    for(int v : a[u])
    {
        if(!vis[v]){
            dfs(v);
        }
    }
}
int main()
{
    cin >> T;
    while(T--){
        cin >> v >> e >> u; 
        for(int i = 1; i <= v; ++i)
            a[i].clear();
        for(int i = 1; i <= e; ++i){
            int x, y; cin >> x >> y; 
            a[x].push_back(y); 
            a[y].push_back(x);
        }
        dfs(u);
        for(int i : res)
            cout << i << " ";
        cout << "\n";
        res.clear();
        memset(vis, false, sizeof vis);
    }
    return 0;
}
/*
1
6 9 5
1 2
1 3
2 3
2 4
3 4
3 5
4 5
4 6
5 6
*/