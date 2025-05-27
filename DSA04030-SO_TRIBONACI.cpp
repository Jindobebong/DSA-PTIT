#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define matrix vector<vector<ll>>
const ll MOD = 1000000000000007LL;
using namespace std;

ll mulNumber(ll a, ll b) {
    if (b == 0) return 0;
    ll half = mulNumber(a, b / 2);
    half = (half + half) % MOD;
    if (b % 2 == 1) half = (half + a) % MOD;
    return half;
}

matrix mul(matrix a, matrix b){
    matrix c(4, vector<ll>(4));
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j)
            for(int k = 0; k < 4; ++k)
                c[i][j] = (c[i][j] + mulNumber(a[i][k], b[k][j])) % MOD;
    }
    return c;
}

matrix Pow(matrix a, ll n){
    matrix res = {
        {1, 0, 0, 0}, 
        {0, 1, 0, 0}, 
        {0, 0, 1, 0}, 
        {0, 0, 0, 1}};
    if(n == 0) return res;
    matrix temp = Pow(a, n / 2);
    matrix result = mul(temp, temp);
    if(n % 2)
        return mul(result, a);
    return result;
}

ll tribo(ll n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 3;
    if(n == 3) return 6;

    matrix base = {
        {1, 1, 1, 0}, 
        {1, 0, 0, 0}, 
        {0, 1, 0, 0}, 
        {1, 1, 1, 1}
    };
    ll x[] = {3, 2, 1, 6};

    matrix res = Pow(base, n - 3);

    ll ans = 0;
    for (int i = 0; i < 4; ++i)
        ans = (ans + mulNumber(res[3][i], x[i])) % MOD;

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        ll n; cin >> n; 
        cout << tribo(n) << endl;
    }
    return 0;
}