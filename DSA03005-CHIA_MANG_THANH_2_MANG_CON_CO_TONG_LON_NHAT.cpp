#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[100], k;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        int x = min(k, n - k); 
        sort(a, a + n); 
        int dau = 0, cuoi = 0;
        for(int i = 0; i < x; ++i)
            dau += a[i];
            
        for(int i = x; i < n; ++i)
            cuoi += a[i];
        cout << cuoi - dau << "\n";
    }
    return 0;
}
/*
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1
*/