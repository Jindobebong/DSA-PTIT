#include <bits/stdc++.h>
#define int long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n;
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        int a[n + 5];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        int dp1[n + 5] = {0}, dp2[n + 5] = {0};
        dp1[1] = 1;
        for(int i = 2; i <= n; ++i){
            if(a[i] > a[i - 1]) dp1[i] = dp1[i - 1] + 1;
            else dp1[i] = 1; 
        }
        dp2[n] = 1;
        for(int j = n - 1; j >= 1; --j){
            if(a[j] > a[j + 1]) dp2[j] = dp2[j + 1] + 1; 
            else dp2[j] = 1;
        }
        int ans = 1;
        for(int i = 1; i <= n; ++i)
            ans = max(dp1[i] + dp2[i] - 1, ans);
        cout << ans << endl; 

    }
    return 0;
}

/*
up[i] = độ dài dãy không giảm dài nhất kết thúc tại i.
down[i] = độ dài dãy không tăng dài nhất bắt đầu tại i
Khi đó, dãy tam giác tại i có độ dài là up[i] + down[i] - 1.
*/