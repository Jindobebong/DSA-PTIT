#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int t, n, m;

int main()
{
    cin >> t;
    while(t--){
        vector<int> a[maxn];
        cin >> n >> m; 
        for(int i = 1; i <= m; ++i){
            int u, v; cin >> u >> v; 
            a[u].push_back(v);
        }
        for(int i = 1; i <= n; ++i){
            cout << i << ": ";
            for(int v : a[i])
                cout << v << " ";
            cout << "\n";
        }
    }
    return 0;
}
/*
1
6  9
1  2
2  5
3  1
3  2
3  5
4  3
5  4
5  6
6  4
*/