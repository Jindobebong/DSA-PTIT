#include <bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;

ll t, n; 
ll ltnp(ll a, ll b){
    ll res = 1; 
    while(b){
        if(b % 2)
            res = (res % mod) * (a % mod) % mod;
        a = (a % mod) * (a % mod) % mod;
        b /= 2;
    }
    return res;
}

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        cout << ltnp(2, n - 1) << "\n";
    }
    return 0;
}