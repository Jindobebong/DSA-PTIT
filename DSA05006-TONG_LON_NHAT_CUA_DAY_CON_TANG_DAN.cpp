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
        int a[n + 5], dp[n + 5];
        int res = INT_MIN;
        for(int i = 1; i <= n; ++i) cin >> a[i];
        for(int i = 1; i <= n; ++i){
            dp[i] = a[i];
            for(int j = 1; j < i; ++j){
                if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
        for(int i = 1; i <= n; ++i){
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
    return 0;
}

/*
dp[i]: tổng lớn nhất của i phần tử đầu
*/