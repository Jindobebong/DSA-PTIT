#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n; int a[n + 5]; map<int, int>mp;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 1; i <= n; ++i){
        if(mp[a[i]]) {
            cout << a[i] << " ";
            mp[a[i]] = 0;
        }
    }
    return 0;
}