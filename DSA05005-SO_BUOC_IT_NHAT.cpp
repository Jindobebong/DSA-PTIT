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
        int a[n + 5];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        int dp[n + 5];
        for(int i = 1; i <= n; ++i){
            dp[i] = 1;
            for(int j = 1; j < i; ++j)
                if(a[i] >= a[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
        
        int ans = *max_element(dp + 1, dp + n + 1);
        cout << n - ans << endl;
    }
    return 0;
}