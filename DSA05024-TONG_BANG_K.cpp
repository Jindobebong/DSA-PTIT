#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<int>dp(k + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= k; ++i){
            for(int x : a){
                if(x <= i){
                    dp[i] = (dp[i] + dp[i - x]) % MOD;
                }
            }
        }
        cout << dp[k] << endl;
    }
    
    return 0;
}
/*
dp[i]: số cách tạo ra được tổng bằng i
dp[i - x]: số cách để có tổng bằng i - x

Nếu x có thể được sử dụng để tạo tổng i (tức là x <= i)
*/