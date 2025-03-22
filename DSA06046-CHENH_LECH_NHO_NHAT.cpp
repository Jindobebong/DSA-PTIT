#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[100005];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i]; 
        sort(a, a + n); 
        int ans = 1e9; 
        for(int i = 0; i < n - 1; ++i){
            ans = min(ans, a[i + 1] - a[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}
/*
1 3 5 18 19 25
*/