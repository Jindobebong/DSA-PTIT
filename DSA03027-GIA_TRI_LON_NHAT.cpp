#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n; 
    ll a[n + 5];
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    ll ans = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] > 0) ans += a[i];
    }
    cout << ans * 2;
    return 0;
}