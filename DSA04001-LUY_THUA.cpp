#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int t; 
ll n, k; 
ll lt(ll a, ll b){
    if(b == 0) return 1;
    ll x = lt(a, b / 2);
    if(b % 2) return a * ((x * x) % mod) % mod;
    return (x * x) % mod;
}
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        cout << lt(n, k) << "\n";
    }
    return 0;
}