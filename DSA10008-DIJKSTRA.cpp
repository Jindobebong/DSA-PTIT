#include <bits/stdc++.h>
#define maxn 1005
#define ll long long
#define pii pair<int, int>
#define pli pair<ll, int>
using namespace std;

int T, V, E, u, v, w, U;
vector<pii>a[maxn];
ll d[maxn];

void dijk(int start){
    for(int i = 1; i <= V; ++i)
        d[i] = 1e18;
    d[start] = 0; 
    priority_queue<pli, vector<pli>, greater<pli>>q;
    q.push({d[start], start});
    while(!q.empty()){
        ll du = q.top().first;
        int u = q.top().second;
        q.pop();

        if(du != d[u]) 
            continue;

        for(pii x : a[u]){
            int v = x.first, w = x.second;
            if(d[u] + w < d[v]){
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        } 
    }
}
int main()
{
    cin >> T; 
    while(T--){
        cin >> V >> E >> U; 
        for(int i = 1; i <= V; ++i)
            a[i].clear();
        for(int i = 1; i <= E; ++i){
            cin >> u >> v >> w; 
            a[u].push_back({v, w});
            a[v].push_back({u, w});
        }
        dijk(U);
        for(int u = 1; u <= V; ++u)
            cout << d[u] << " ";
        memset(d, 0, sizeof d);
        cout << "\n";
    }
    return 0;
}