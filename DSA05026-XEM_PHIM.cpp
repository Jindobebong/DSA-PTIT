#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int c, n, w[105], dp[maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> c >> n; 
    for(int i = 1; i <= n; ++i) cin >> w[i];
    
    dp[0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = c - w[i]; j >= 0; --j){
            if(dp[j]) dp[j + w[i]] = 1;
        }
    }

    for(int i = c; i >= 0; --i){
        if(dp[i]) {
            cout << i << " ";
            return 0;
        }
    }
    return 0;
}