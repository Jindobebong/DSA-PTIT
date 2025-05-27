#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, x, y, z; 
string X, Y, Z;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> x >> y >> z >> X >> Y >> Z; 
        int res = INT_MIN;
        vector<vector<vector<int>>>dp(x + 1, vector<vector<int>>(y + 1, vector<int>(z + 1, 0)));
        for(int i = 1; i <= x; ++i){
            for(int j = 1; j <= y; ++j){
                for(int k = 1; k <= z; ++k){
                    if(X[i - 1] == Y[j - 1] && Y[j - 1] == Z[k - 1])
                        dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    else   
                        dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                    
                    res = max(res, dp[i][j][k]);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}