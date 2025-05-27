#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, a[25][25];
int dp[1 << 20];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cin >> a[i][j];
        
        int full_mask = 1 << n;
        fill(dp, dp + full_mask, 0);

        // duyệt
        for(int mask = 0; mask < full_mask; ++mask){
            int r = __builtin_popcount(mask);

            if(r >= n) continue;

            for(int c = 0; c < n; ++c){
                if(!(mask & (1 << c))){
                    int new_mask = mask | (1 << c);
                    dp[new_mask] = max(dp[new_mask], dp[mask] + a[r][c]);
                }
            }
        }
        cout << dp[full_mask - 1] << endl;
    }
    return 0;
}