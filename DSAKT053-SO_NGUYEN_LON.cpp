#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t; 
string n, m;
int dp[1005][1005];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        memset(dp, 0, sizeof dp);
        int res = 0;

        for(int i = 1; i <= n.size(); ++i){
            for(int j = 1; j <= m.size(); ++j){
                if(n[i - 1] == m[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else 
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                res = max(res, dp[i][j]);
            }
        }
        cout << res << endl;
    }
    return 0;
}