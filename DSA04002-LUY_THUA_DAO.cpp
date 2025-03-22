#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int t; 
ll n;
ll ln(ll n){
    ll res = 0;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
// ll lt(ll a, ll b){
//     ll res = 1; 
//     while(b){
//         if(b % 2)
//             res = (res * a) % mod;
//         a = (a * a) % mod;
//         b /= 2;
//     }
//     return res;
// }
ll lt(ll a, ll b){
    if(b == 0) return 1; 
    ll x = lt(a, b / 2);
    if(b % 2){
        return a * (x * x % mod) % mod;
    }
    return (x * x) % mod;
}
int main()
{
    //cout << ln(12);
    cin >> t;
    while(t--){
        cin >> n;
        cout << lt(n, ln(n)) << "\n";
    }
    return 0;
}