#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
#define endl "\n"
using namespace std;

int t, n, v;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> v; 
        int a[n + 5], c[n + 5];
        for(int i = 1; i <= n; ++i) cin >> a[i]; 
        for(int i = 1; i <= n; ++i) cin >> c[i];

        int dp[v + 1]; //dp[i]: giá trị lớn nhất đạt được với thể tích túi là i
        memset(dp, 0, sizeof dp);
        for(int i = 1; i <= n; ++i){
            for(int j = v; j >= a[i]; --j)
                dp[j] = max(dp[j], dp[j - a[i]] + c[i]);
        }

        cout << dp[v] << endl;
    }
    return 0;
}