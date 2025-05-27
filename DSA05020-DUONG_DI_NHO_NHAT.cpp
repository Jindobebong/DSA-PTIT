#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, m;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        int a[n + 5][m + 5], dp[n + 5][m + 5] = {0};
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j)
                cin >> a[i][j];
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j){
                if(i == 1 && j == 1)
                    dp[i][j] = a[i][j];
                else if (i == 1)
                    dp[i][j] = dp[i][j - 1] + a[i][j];
                else if(j == 1)
                    dp[i][j] = dp[i - 1][j] + a[i][j];
                else 
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + a[i][j];
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}