#include <bits/stdc++.h>
#define int long long
using namespace std;

int t, n, k, a[5005];
int kt(int a[], int n, int k){
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j)
            if(binary_search(a + j + 1, a + n, k - a[i] - a[j]))
                return true;
    }
    return false;
}
main()
{
    cin >> t;
    while(t--){
        cin >> n >> k; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n);
        if(kt(a, n, k)) cout << "YES\n"; 
        else cout << "NO\n";
    }
    return 0;
}