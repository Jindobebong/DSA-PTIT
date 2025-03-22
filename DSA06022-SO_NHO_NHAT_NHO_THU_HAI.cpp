#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[10000005];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        int min1 = 1e9, min2 = 1e9;
        for(int i = 1; i <= n; ++i)
        {
            cin >> a[i]; 
            min1 = min(min1, a[i]);
        }
        for(int i = 1; i <= n; ++i)
        {
            if(a[i] != min1)
                min2 = min(min2, a[i]);
        }
        if(min2 != 1e9) cout << min1 << ' ' << min2; 
        else cout << -1; 
        cout << "\n";
    }
    return 0;
}