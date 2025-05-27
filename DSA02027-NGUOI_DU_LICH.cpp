#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

bool vis[20];
int n, c[20][20], ans = INT_MAX;
void backtrack(int idx, int cost, int cnt){
    if(cost >= ans) return;
    if(cnt == n && c[idx][0]){
        ans = min(ans, cost + c[idx][0]);
        return;
    }
    for(int i = 0; i < n; ++i){
        if(!vis[i] && c[idx][i]){
            vis[i] = true;
            backtrack(i, cost + c[idx][i], cnt + 1);
            vis[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> c[i][j];
    vis[0] = true;
    backtrack(0, 0, 1);
    cout << ans;
    return 0;
}

/*
idx: thành phố hiện tai
*/