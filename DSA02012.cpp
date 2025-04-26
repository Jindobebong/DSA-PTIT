#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, m, n, a[105][105]; 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> m >> n; 
        memset(a, 0, sizeof a);
        for(int i = 1; i <= m; ++i)
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        
        int dp[105][105] = {0}; //dp[i][j]: số cách đi được tới ô (i, j) từ ô (1, 1)

        dp[1][1] = 1; 
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <= n; ++j){
                if(i > 1) dp[i][j] += dp[i - 1][j]; 
                if(j > 1) dp[i][j] += dp[i][j - 1];
            }
        }
        cout << dp[m][n] << endl;
    }
    return 0;
}

/*
ways[i][j] = ways[i-1][j] + ways[i][j-1]
*/