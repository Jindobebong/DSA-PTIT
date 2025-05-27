#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define matrix vector<vector<ll>>
using namespace std;

matrix mul(matrix a, matrix b){
    matrix c(2, vector<ll>(2));
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            for(int k = 0; k < 2; ++k)
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
        }
    }
    return c;
}

matrix Pow(matrix a, ll n){
    matrix res = {{1, 0}, {0, 1}};
    if(n == 0) return res;
    matrix temp = Pow(mul(a, a), n / 2);
    if(n % 2 == 0)
        return temp;
    return mul(temp, a);
}

ll fibo(ll n){
    if(n == 0) return 0;
    matrix base = {{1, 1}, {1, 0}};
    matrix res = Pow(base, n);
    return res[0][1];
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        ll n; cin >> n; 
        cout << fibo(n) << endl;
    }
    return 0;
}