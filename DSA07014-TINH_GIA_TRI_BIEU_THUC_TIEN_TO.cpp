#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

void solve(string s){
    stack<ll>st;
    for(int i = s.size() - 1; i >= 0; --i){
        if(isdigit(s[i]))
            st.push(s[i] - '0');
        else{
            ll t1 = st.top(); st.pop();
            ll t2 = st.top(); st.pop();
            if(s[i] == '+') st.push(t1 + t2);
            else if(s[i] == '-') st.push(t1 - t2);
            else if(s[i] == '*') st.push(t1 * t2);
            else st.push(t1 / t2);
        }
    }
    cout << st.top() << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string s; cin >> s; 
        solve(s);
    }
    return 0;
}
/*
2
-+8/632
-+7*45+20
*/