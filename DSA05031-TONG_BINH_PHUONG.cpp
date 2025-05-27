#include <bits/stdc++.h>
#define ll long long
#define maxn 10005
#define endl "\n"
using namespace std;

int t, n, dp[maxn];
void ktao(){
    dp[1] = 1; 
    for(int i = 2; i <= maxn; ++i){
        dp[i] = INT_MAX;
        for(int j = 1; j * j <= i; ++j)
            dp[i] = min(dp[i - j * j] + 1, dp[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    ktao();
    while(t--){
        cin >> n; 
        cout << dp[n] << endl;
    }
    return 0;
}