#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int k; 
        string s; 
        cin >> k >> s; 

        map<int, int>mp;
        for(auto x : s)
            mp[x]++;
        
        vector<int>a;
        for(auto x : mp)
            a.push_back(x.second);
        sort(a.begin(), a.end());

        int ans = 0;
        while(k--){
            a[a.size() - 1]--;
            sort(a.begin(), a.end());
        }
        for(auto x : a)
            ans += x * x;
        cout << ans << endl;
    }
    return 0;
}