#include <bits/stdc++.h>
#define int long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int a[maxn], t, n, dp[maxn];
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 1; i <= n; ++i) cin >> a[i];
        memset(dp, 0, sizeof dp);
        dp[1] = a[1], dp[2] = max(a[1], a[0] + a[2]);
        for(int i = 3; i <= n; ++i) 
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        cout << dp[n] << endl;
    }
    return 0;
}

/*
dp[i]: số lượng lớn nhất trong i nhà đầu
ko lấy ai: dp[i - 1]
lấy ai: dp[i - 2] + ai
*/