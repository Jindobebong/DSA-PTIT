#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string s; cin >> s; 
        int cnt = 0, ans = 0; 
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(') ++cnt; 
            else{
                --cnt;
                if(cnt >= 0) ans += 2;
                else cnt = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}