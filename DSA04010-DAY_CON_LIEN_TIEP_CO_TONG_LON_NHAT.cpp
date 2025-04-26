#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, a[105];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        memset(a, 0, sizeof a);
        for(int i = 1; i <= n; ++i) cin >> a[i];

        int dp[105] = {}; 
        dp[1] = a[1]; 
        for(int i = 2; i <= n; ++i) 
            dp[i] = max(a[i], dp[i - 1] + a[i]);
        
        int ans = -1e9; 
        for(int i = 1; i <= n; ++i)
            ans = max(ans, dp[i]);
        cout << ans << endl; 
    }
    return 0;
}

/*
dp[i] = x, dãy con kết thúc tại vị trí i có tổng lớn nhất bằng x

th1: lấy mỗi ai, dp[i] = a[i];
th2: ghép ai vào, dp[i] =dp[i - 1] + ai
*/