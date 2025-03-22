#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k; 
        int a[n]; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n); 
        map<int, int>mp; 
        ll ans = 0; 
        for(int i = 0; i < n; ++i){
            ans += 1ll* mp[k - a[i]];
            mp[a[i]]++;
        }
        cout << ans << "\n";
    }
    return 0;
}