#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        pair<int, int>a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n);
        int ans = -1, Min = a[0].second, k = a[0].first;
        for(int i = 1; i < n; ++i){
            if(a[i].first > k){
                ans = max(ans, a[i].second - Min);
            }
            if(Min > a[i].second){
                k = a[i].first;
                Min = a[i].second;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}