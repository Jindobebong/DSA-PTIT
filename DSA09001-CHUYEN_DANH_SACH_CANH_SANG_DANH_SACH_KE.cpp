#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int t, n, m;
int main()
{
    cin >> t;
    while(t--){
        cin >> n >> m; 
        vector<int>a[maxn];
        for(int i = 1; i <= m; ++i){
            int u, v; cin >> u >> v; 
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        for(int i = 1; i <= n; ++i){
            cout << i << ": ";
            sort(a[i].begin(), a[i].end());
            for(int v : a[i])
                cout << v << " ";
            cout << "\n";
        }
        //cout << "\n"; 
    }
    return 0;
}