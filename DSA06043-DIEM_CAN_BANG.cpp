#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t; while(t--){
        cin >> n; int a[n + 5], pre[n + 5];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        pre[1] = a[1];
        for(int i = 2; i <= n; ++i)
            pre[i] = pre[i - 1] + a[i];
        
        int ok = 1;
        
        for(int i = 2; i < n; ++i)
            if(pre[i - 1] == pre[n] - pre[i]) {
                ok = 0; 
                cout << i << " ";
                break;
            }
        
        if(ok) cout << -1;

        cout << "\n";
    }
    return 0;
}
