#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, s;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> s; 
        int a[n];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        vector<bool>dp(s + 1, false);
        dp[0] = true; 
        for(int i = 1; i <= n; ++i){
            for(int j = s - a[i]; j >= 0; --j){
                if(dp[j]) dp[j + a[i]] = true;
            }
        }
        if(dp[s]) cout << "YES"; 
        else cout << "NO";
        cout << endl; 
    }
    return 0;
}