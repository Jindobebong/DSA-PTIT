#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, m;
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        int a[n][m];
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                cin >> a[i][j];
        int dp[n][m] = {};
        int res = 0;

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(a[i][j] == 1){
                    if(i == 0 || j == 0) dp[i][j] = 1;
                    else dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                    res = max(res, dp[i][j]);
                }
                else
                    dp[i][j] = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}

/*
dp[i][j]: cạnh lớn nhất kết thúc tại ô (i, j)
*/