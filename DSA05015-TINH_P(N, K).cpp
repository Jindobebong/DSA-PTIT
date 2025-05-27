#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
using namespace std;

int t, n, k;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k;
        ll res = 1; 
        for(int i = 1; i <= k; ++i){
            res = (res * 1LL * (n - k + i)) % MOD;
        }
        cout << res << endl;
    }
    return 0;
}