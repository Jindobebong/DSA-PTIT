#include <bits/stdc++.h>
#define int long long
#define maxn 5005
using namespace std;

int t, n, k;
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        int a[n];
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n); 
        int ans = 0;
        for(int i = 0; i < n ; ++i){
            if(a[i] >= k) break;
            for(int j = i + 1; j < n; ++j){
                auto it = lower_bound(a + j + 1, a + n, k - a[i] - a[j]);
                ans += it - a - j - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
ai + aj + ak < k
ak < k - ai - aj

k = 2
-2 0 1 3
-2 + 0 + 4 = 
*/