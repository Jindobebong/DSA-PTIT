#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define endl "\n"
using namespace std;

int t, n, dp[maxn];
void ktao(){
    dp[1] = 0; 
    for(int i = 2; i <= maxn; ++i){
        dp[i] = dp[i - 1] + 1;
        if(i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if(i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    ktao();
    while(t--){
        cin >> n; 
        cout << dp[n] << endl;
    }
    return 0;
}
/*
Đầu tiên mặc định giảm 1 bước.
Sau đó nếu chia 2, chia 3 tốt hơn thì chọn min().
*/