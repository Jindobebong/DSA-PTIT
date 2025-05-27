#include <bits/stdc++.h>
#define ll long long
#define maxn 200
#define endl "\n"
using namespace std;

const int MOD = 1e9 + 7;
int t, n; 

ll fac[maxn], infac[maxn];

ll Pow(ll a, ll b){
    if(b == 0) return 1;
    ll temp = Pow(a, b / 2);
    temp = (temp * temp) % MOD;
    if(b % 2)
        return (temp * a) % MOD;
    return temp;
}
void pre(){
    fac[0] = infac[0] = 1;
    for(int i = 1; i < maxn; ++i){
        fac[i] = fac[i - 1] * i % MOD;
        infac[i] = Pow(fac[i], MOD - 2);
    }
}

ll C(int n, int k){
    if(k > n) return 0; 
    return fac[n] * infac[k] % MOD * infac[n - k] % MOD;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    pre();
    while(t--){
        cin >> n;
        cout << C(n + 9, 9) << endl;
    }
    return 0;
}