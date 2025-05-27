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
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];

        int dp[n + 5] = {};
        dp[0] = a[0], dp[1] = max(a[0], a[1]);
        for(int i = 2; i < n; ++i)
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        
        int res = *max_element(dp, dp + n);
        cout << res << endl;
    }
    return 0;
}

/*
2 phần tử ko kề nhau 
th1: ko lấy ai => dp[i - 1]
th2: lấy ai  => dp[i - 2] + a[i]
*/