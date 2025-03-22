#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, k;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k;; int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0; i < n; ++i){
            int x = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            cnt += (x - i - 1);
        }
        cout << cnt << "\n";
    }
    return 0;
}
/*
k = 3
1 2 4 10
1 1
2 
*/