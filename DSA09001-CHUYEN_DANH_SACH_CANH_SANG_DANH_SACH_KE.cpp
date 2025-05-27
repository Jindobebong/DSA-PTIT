#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int V, E, u, v; cin >> V >> E;
        vector<vector<int>>ke(V + 1);
        for(int i = 0; i < E; ++i){
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i = 1; i <= V; ++i){
            cout << i << ": ";
            sort(ke[i].begin(), ke[i].end());
            for(auto x : ke[i])
                cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}