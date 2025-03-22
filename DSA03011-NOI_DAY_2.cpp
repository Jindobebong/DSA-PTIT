#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int t, n;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        int a[n];
        priority_queue<int, vector<int>, greater<int>>p;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            p.push(a[i]);
        }
        ll sum = 0;
        while(p.size() > 1){
            ll fi = p.top(); p.pop(); 
            ll se = p.top(); p.pop();
            ll ans = fi + se;
            ans %= mod;
            sum = (sum + ans) % mod;
            p.push(ans);
        }
        cout << sum << "\n";
    }
    return 0;
}