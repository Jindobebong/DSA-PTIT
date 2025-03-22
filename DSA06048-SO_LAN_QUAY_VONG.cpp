#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t;
    while(t--){
        cin >> n; int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        int ans = 0; 
        for(int i = 1; i < n; ++i)
            if(a[i] < a[i - 1]){
                ans = i; 
                break;
            }
        cout << ans << "\n";
    }
    return 0;
}