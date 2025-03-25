#include <bits/stdc++.h>
#define ll long long
using namespace std;

int vtd(int a[], int l, int r, int x){
    int vt = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            vt = m; 
            r = m - 1;
        }
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return vt;
}

int vtc(int a[], int l, int r, int x){
    int vt = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            vt = m; 
            l = m + 1;
        }
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return vt;
}
int main()
{
    int t, n, k; cin >> t; 
    while(t--){
        cin >> n >> k; 
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);

        ll ans = 0;

        for(int i = 0; i < n; ++i){
            int d = vtd(a, i + 1, n - 1, k - a[i]), 
            c = vtc(a, i + 1, n - 1, k - a[i]);

            if(d != -1) ans += 1ll * (c - d + 1);
        }

        cout << ans ;
        cout << "\n";
    }
    return 0;
}
