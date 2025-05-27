#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
#define endl "\n"
using namespace std;

struct edge{
    int u, v;
    int w;
};

int n, m, parent[maxn], sz[maxn];
vector<edge>adj;

void make_set(){
    for(int i = 1; i <= n; ++i){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int v){
    if(v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

bool Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a == b) return false;
    if(sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
}

bool cmp(edge x, edge y){
    return x.w < y.w;
}

void inp(){
    adj.clear();
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int u, v, w; cin >> u >> v >> w;
        adj.push_back({u, v, w});
    }
}

void kruskal(){
    vector<edge>mst; 
    int d = 0; 
    sort(adj.begin(), adj.end(), cmp);
    for(int i = 0; i < m; ++i){
        if(mst.size() == n - 1) break;
        edge e = adj[i];
        if(Union(e.u, e.v)){
            mst.push_back(e);
            d += e.w;
        }
    }
    cout << d << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        inp();
        make_set();
        kruskal();
    }
    return 0;
}