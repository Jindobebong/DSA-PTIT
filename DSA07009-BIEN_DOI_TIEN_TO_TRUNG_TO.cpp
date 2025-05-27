#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

void solve(string s){
    stack<string>st; 
    for(int i = s.size() - 1; i >= 0; --i){
        if(isalpha(s[i])) 
            st.push(string(1, s[i]));
        else{
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            string e = "(" + t1 + s[i] + t2 + ")";
            st.push(e);
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