#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t;
string s1, s2;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> s1 >> s2; 
        int m = s1.size(), n = s2.size();
        vector<vector<int>>dp(m + 1, vector<int>(n + 1, 0));

        //Tính toán vòng lặp
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <= n; ++j){
                if(s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else 
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        cout << dp[m][n] << endl;
    }
    return 0;
}