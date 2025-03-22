#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int T, V, E, u, v;
vector<int> a[maxn];
int color[maxn];

bool dfs(int u){
    color[u] = 1;
    for(int v : a[u]){
        if(color[v] == 0){
            if(dfs(v)) return true;
        }
        else if(color[v] == 1)
            return true;
    }
    color[u] = 2;
    return false;
}
int main()
{
    cin >> T;
    while(T--){
        cin >> V >> E;
        for(int i = 1; i <= V; ++i)
            a[i].clear();

        for(int i = 1; i <= E; ++i){
            cin >> u >> v;
            a[u].push_back(v); 
        }
        memset(color, 0, sizeof color);

        bool ok = 0;
        for(int i = 1; i <= V; ++i){
            if(color[i] == 0){
                if(dfs(i)){
                    ok = 1;
                    break;
                }
            }
        }
        if(ok) cout << "YES\n"; 
        else cout << "NO\n";
    }
    return 0;
}