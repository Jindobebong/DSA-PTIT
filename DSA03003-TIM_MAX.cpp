#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int t, n, a[10000005];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        ll ans = 0;
        sort(a, a + n);
        for(int i = 0; i < n; ++i)
        {
            ans = (ans + a[i] * i) % mod;
        }
        cout << ans << "\n";
    }
    return 0;
}