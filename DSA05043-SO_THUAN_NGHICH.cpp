#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; string s; 
    cin >> t; 
    while(t--){
        cin >> s; 
        int n = s.size();
        vector<vector<bool>>dp(n, vector<bool>(n, false));
        int max_len;
        for(int i = 0; i < n; ++i){
            dp[i][i] = true;
            max_len = 1;
        }
        for(int i = 0; i < n - 1; ++i){
            if(s[i] == s[i + 1]){
                dp[i][i + 1] = true;
                max_len = 2;
            }
        }
        
        for(int len = 3; len <= n; ++len){ // Độ dài dãy
            for(int i = 0; i <= n - len; ++i){ // vị trí bắt đầu của chuỗi
                int j = i + len - 1;
                if(s[i] == s[j] && dp[i + 1][j - 1]){
                    dp[i][j] = true;
                    max_len = len;
                }
            }
        }
        cout << max_len << endl;
    }
    return 0;
}

/*
dp[i][j] = true nếu chuỗi con s[i...j] là đối xứng

Khởi tạo:
_ chuỗi 1 kí tự luôn đối xứng: dp[i][i] = true
_ s[i] = s[i + 1]: dp[i][i + 1] = true

Công thức:
_ nếu s[i] == s[j] và dp[i + 1][j - 1] == true => đối xứng
*/