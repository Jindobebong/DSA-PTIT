#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tknp(int a[], int l, int r, int x)
{
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
            return m; 
        if(a[m] > x)
            r = m - 1;
        else l = m + 1;
    }
    return 0;
}

int t, n, a[10000005], x;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> x; 
        for(int i = 1; i <= n; ++i)
            cin >> a[i];
        int vt = n; 
        for(int i = 1; i <= n; ++i)
            if(a[i] < a[i - 1]) vt = i;
        int u = tknp(a, 1, vt, x);
        int v;
        if(vt != n) v = tknp(a, vt, n, x);
        if(u) cout << u; 
        else if(v) cout << v; 
        cout << "\n";
    }
    return 0;
}