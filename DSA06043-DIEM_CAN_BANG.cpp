#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t; 
    while(t--){
        cin >> n; int a[n], pre[n];
        for(int i = 1; i <= n; ++i)
            cin >> a[i];
        pre[0] = 0;
        for(int i = 1; i <= n; ++i)
            pre[i] = pre[i - 1] + a[i];
        bool ok = 1;
        for(int i = 2; i < n; ++i){
            int lefT = pre[i - 1] - pre[0];
            int right = pre[n] - pre[i];
            if(lefT == right){
                ok = 0;
                cout << i;
                break;
            }
        }
        if(ok) cout << -1;
        cout << "\n";
    }
    return 0;
}

/*
-7 1 5 2 -4 3 0
-7 -6 -1 1 -3 0 0
*/