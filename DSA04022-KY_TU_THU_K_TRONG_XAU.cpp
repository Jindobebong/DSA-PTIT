#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t; 
ll n, k;

int solve(ll n, ll k){
    ll mid = 1ll << (n - 1); 
    if(mid == k) return n; 
    if(k < mid) return solve(n - 1, k);
    return solve(n - 1, k - mid);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        cout << (char)(solve(n, k) + 64) << endl; 
    }
    return 0;
}