#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, k; cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int>a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        vector<int>dp(k, -1);
        dp[0] = 0;
        for(int i = 0; i < n; ++i){
            vector<int>new_dp = dp;
            for(int j = 0; j < k; ++j){
                if(dp[j] != -1){ // có dãy con với tổng dư j
                    int du = (j + a[i]) % k; 
                    new_dp[du] = max(new_dp[du], dp[j] + 1);
                }
            }
            
            dp = new_dp;
        }
        cout << dp[0] << endl;
    }
    return 0;
}
/*
dp[i]: độ dài dãy con dài nhất có số dư i khi chia cho k

=> kết quả cần tìm là dp[0]
*/