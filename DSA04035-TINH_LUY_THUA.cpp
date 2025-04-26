#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define MOD 1000000007
#define endl "\n"
using namespace std;

ll a, b; 

ll mu(ll a, ll b){
    if(b == 0) return 1; 
    ll tmp = mu(a, b / 2);
    (tmp *= tmp) %= MOD;
    if(b % 2)
        (tmp *= a) %= MOD;
    return tmp;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    while(cin >> a >> b){
        if(a == 0 && b == 0) return 0;
        cout << mu(a, b) << endl; 
    }
    return 0;
}