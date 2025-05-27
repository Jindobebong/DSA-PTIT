#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

bool dp[1005][1005]; //dp[i][j] = true nếu s[i...j] là đối xứng

int kq(string s){
    int n = s.size();
    int maxi = 1; // ít nhất 1 kí tự là đối xứng

    for(int i = 0; i < n; ++i)
        dp[i][i] = true; // kí tự đơn luôn đối xứng

    for(int i = 0; i < n - 1; ++i){
        if(s[i] == s[i + 1]){
            dp[i][i + 1] = true;
            maxi = 2;
        }
    }
    
    for(int len = 3; len <= n; ++len){
        for(int i = 0; i <= n - len; ++i){
            int j = i + len - 1;
            if(s[i] == s[j] && dp[i + 1][j - 1]){
                dp[i][j] = 1;
                maxi = len;
            }
        }
    }

    return maxi;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string s; cin >> s; 
        memset(dp, 0, sizeof dp);
        cout << kq(s) << endl;
    }
    return 0;
}