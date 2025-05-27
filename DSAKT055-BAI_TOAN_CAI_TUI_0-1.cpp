#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, v;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> v;
        int a[n], c[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> c[i];

        vector<int>dp(v + 1, 0);
        for(int i = 0; i < n; ++i){
            for(int j = v; j >= a[i]; --j){
                dp[j] = max(dp[j], dp[j - a[i]] + c[i]);
            }
        }
        cout << dp[v] << endl;
    }
    return 0;
}

/*
v: thể tích tôi đa cái túi
=> thử thể ích từ 0 -> v
dp[j]: lưu giá trị tối đa khi thể tích là j
dp[j - a[i]]: đang có cái túi có thể tích là j - ai, giờ thêm con ai vào
*/