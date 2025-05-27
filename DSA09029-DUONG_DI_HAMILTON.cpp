#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

vector<vector<int>>adj;
int n, m; 
bool vis[15];
int check;

void backtrack(int current, int cnt){
    if(cnt == n){
        check = 1;
        return;
    }
    for(auto x : adj[current]){
        if(!vis[x]){
            vis[x] = true;
            backtrack(x, cnt + 1);
            vis[x] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        cin >> n >> m; 
        check = 0; 
        adj.assign(15, vector<int>());

        for(int i = 1; i <= m; ++i){
            int a, b; cin >> a >> b; 
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for(int i = 1; i <= n; ++i){
            memset(vis, 0, sizeof vis);
            vis[i] = true;
            backtrack(i, 1);
            if(check) break;
        }
        if(check) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}