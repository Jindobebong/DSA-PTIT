#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, a[20];
ll ans = -1;
string s; 

bool kt(ll x){
    ll i = round(cbrt(x));
    return i * i * i == x;
}
void backtrack(int i){
    if(i == s.size()){
        string res = "";
        for(int j = 0; j < s.size(); ++j){
            if(a[j]) res += s[j];
        }
        if(res.size())
            if(kt(stoll(res))) ans = max(ans, stoll(res));
        return;
    }
    for(int x = 0; x <= 1; ++x){
        a[i] = x;
        backtrack(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> s;
        ans = -1;
        memset(a, 0, sizeof a);

        backtrack(0);
        cout << ans << endl;
    }
    return 0;
}