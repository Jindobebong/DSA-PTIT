#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t;
string s;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> s; 
        string ans = "";
        ans += s[0];
        for(int i = 1; i < s.size(); ++i){
            if(s[i] != s[i - 1]) ans += '1';
            else ans += '0';
        }
        cout << ans << endl; 
    }
    return 0;
}

