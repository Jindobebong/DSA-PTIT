#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
#define endl "\n"
using namespace std;

int n, m;
int parent[maxn], sz[maxn];

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
    if(a == b) return true; 
    if(sz[a] < sz[b]) swap(a, b);
    parent[b] = a; 
    sz[a] += sz[b];
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        cin >> n >> m; 
        make_set();
        bool check = false;
        for(int i = 1; i <= m; ++i){
            int a, b; cin >> a >> b;
            if(!check){
                if(Union(a, b)){
                    check = true; // phát hiện có chu trình
                }
            }
        }
        if(check) cout << "YES"; 
        else cout << "NO";
        cout << endl;
    }
    return 0;
}