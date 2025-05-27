#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

void solve(string s){
    stack<string>st; 
    for(int i = 0; i < s.size(); ++i){
        if(isalpha(s[i])) st.push(string(1, s[i]));
        else{
            string t2 = st.top(); st.pop();
            string t1 = st.top(); st.pop();
            st.push(t1 + s[i] + t2);
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