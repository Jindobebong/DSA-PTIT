#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        ll dp[55]; 
        memset(dp, 0, sizeof dp);
        dp[0] = 1, dp[1] = 1, dp[2] = 2;
        for(int i = 3; i <= n; ++i)
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        
        cout << dp[n] << endl; 
    }
    return 0;
}