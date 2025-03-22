#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
#define maxn 1000005
int t, n, m, a[maxn], b[maxn];

main()
{
    cin >> t;
    while(t--){
        cin >> n >> m; 
        int maxi = -1e9, mini = 1e9;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i]; 
            maxi = max(maxi, a[i]);
        }
        for(int i = 0; i < m; ++i)
        {
            cin >> b[i];
            mini = min(mini, b[i]);
        }
        cout << maxi * mini << "\n";
    }
    return 0;
}

