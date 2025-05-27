#include <bits/stdc++.h>
#define int long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, ans = 0, n, a[15];
string s;

int total(string s){
    for(int i = 0; i < s.size(); ++i){
        string res = "";
        for(int j = i; j < s.size(); ++j){
            res += s[j]; 
            ans += stoll(res);
        }
    }
    return ans;
}
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> s;
        ans = 0;
        cout << total(s) << endl;
    }
    return 0;
}