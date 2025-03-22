#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; 
    vector<int>a(n + 5), f(n + 5);
    for(int i = 1; i <= n; ++i) cin >> a[i];
    
    int ans = -1e9; 
    for(int i = 1; i <= n; ++i){
        f[i] = 1;
        for(int j = 1; j < i; ++j)
            if(a[i] > a[j] && f[i] <= f[j])
                f[i] = f[j] + 1;
    }
    for(int i = 1; i <= n; ++i)
        ans = max(ans, f[i]);
        
    cout << ans;
    return 0;
}

/*
10 22 9 33 21 50

*/