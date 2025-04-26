#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define MOD 1000000007
#define endl "\n"
using namespace std;

int t, n, k; 

ll mu(int a, int b){
    if(b == 0) return 1; 
    ll ans = mu(a, b / 2);
    (ans *= ans) %= MOD;
    if(b % 2) (ans *= a) %= MOD;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        ll ans = 1;
        for(int i = 1; i <= k; ++i){
            (ans *= 1ll * (n - k + i)) %= MOD;
            (ans *= mu(i, MOD - 2)) %= MOD;
        }
        cout << ans << endl; 
    }
    return 0;
}