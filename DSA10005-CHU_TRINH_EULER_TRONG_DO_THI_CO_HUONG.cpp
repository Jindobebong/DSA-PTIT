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
        int n, m; cin >> n >> m; 
        int ra[n + 5] = {}, vao[n + 5] = {0};
        for(int i = 1; i <= m; ++i){
            int u, v; cin >> u >> v; 
            vao[u]++;
            ra[v]++;
        }
        bool check = true;
        for(int i = 1; i <= n; ++i){
            if(vao[i] != ra[i]){
                check = false;
                break;
            }
        }
        if(check) cout << 1; 
        else cout << 0;
        cout << endl;
    }
    return 0;
}