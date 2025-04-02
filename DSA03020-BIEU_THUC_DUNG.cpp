#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string s; cin >> s; 
        int ans = 0, cnt = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '[') ++cnt; 
            else --cnt;
            if(cnt < 0) ++ ans;
        }

        cout << ans + cnt / 2 << endl; 
    }
    return 0;
}