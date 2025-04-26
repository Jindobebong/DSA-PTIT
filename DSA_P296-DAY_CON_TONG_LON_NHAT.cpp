#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define endl "\n"
using namespace std;

int n, q, a[maxn], l, r;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> q; 
    ll b[n + 5], tmp = 0;
    b[0] = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i]; 
        if(a[i] > 0){
            tmp += a[i];
        }
        b[i] = tmp;
    }
    while(q--){
        cin >> l >> r;
        if(b[r] - b[l - 1] > 0) cout << b[r] - b[l - 1];
        else cout << 0; 
        cout << endl; 
    }
    return 0;
}