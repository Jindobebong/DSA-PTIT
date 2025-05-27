#include <bits/stdc++.h>
#define ll long long
#define pli pair<ll, int>
#define endl "\n"
using namespace std;

const ll INF = 1e18;
ll d[105][105];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; 
    cin >> n >> m;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(i == j) d[i][j] = 0; 
            else d[i][j] = INF;
        }
    }
    for(int i = 1; i <= m; ++i){
        ll u, v, w; 
        cin >> u >> v >> w; 
        d[u][v] = min(d[u][v], w);
        d[v][u] = min(d[v][u], w);
    }

    for(int k = 1; k <= n; ++k){
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    int q; cin >> q; 
    while(q--){
        int x, y; cin >> x >> y; 
        cout << d[x][y] << endl;
    }
    return 0;
}