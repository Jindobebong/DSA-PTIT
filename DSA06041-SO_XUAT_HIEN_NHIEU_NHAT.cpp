#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;
int main()
{
    cin >> t;
    while(t--){
        cin >> n; int a[n];
        map<int, int>mp;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int cnt = -1e7, ans = 1e7;
        for(auto x : mp)
        {
            if(x.second > cnt){
                cnt = x.second;
                ans = x.first;
            }
        }
        if(cnt > n / 2) cout << ans; 
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}