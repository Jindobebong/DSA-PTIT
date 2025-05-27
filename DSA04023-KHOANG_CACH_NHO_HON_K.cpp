#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, k;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i]; 
        sort(a, a + n);
        ll ans = 0;
        for(int i = 0; i < n; ++i){
            auto it = lower_bound(a + i + 1, a + n, a[i] + k);
            int idx = it - a;
            ans += 1ll * (idx - i - 1);
        }
        cout << ans << endl;
    }
    return 0;
}