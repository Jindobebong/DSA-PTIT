#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t; 
string s;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> s;
        int n = s.size();

        int dp[n][n] = {};
        for(int i = 0; i < n; ++i)
            dp[i][i] = 1;
        for(int len = 2; len <= n; ++len){
            for(int i = 0; i <= n - len; ++i){
                int j = i + len - 1;
                if(s[i] == s[j])
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                else
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
        cout << n - dp[0][n - 1] << endl;
    }
    return 0;
}

/*
dp[i][j]: độ dài đối xứng dài nhất từ si đến sj
*/