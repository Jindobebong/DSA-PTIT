#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define MOD 1000000007
#define endl "\n"
using namespace std;

int n, k, t;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        int dp[n + 5];
        memset(dp, 0, sizeof dp);
        dp[0] = 1;  //Có 1 cách để đứng tại bậc thang thứ 0
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= k; ++j)
                if(i - j >= 0) (dp[i] += dp[i - j]) %= MOD;
        }
        cout << dp[n] << endl;
    }
    return 0;
}