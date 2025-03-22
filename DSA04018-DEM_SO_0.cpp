#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[1005];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        map<int, int>mp;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        cout << mp[0] << "\n";
    }
    return 0;
}