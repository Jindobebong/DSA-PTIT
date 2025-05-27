#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int douutien(string s){
    if(s == "+" || s == "-") return 1; 
    if(s == "*" || s == "/") return 2;
    if(s == "^") return 3; 
    return 0;
}

void solve(string s){
    string res = "";
    stack<string>st;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '(') st.push(string(1, s[i]));
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != "("){
                res += st.top(); st.pop();
            }
            st.pop();
        }
        else if(isalpha(s[i])) res += s[i];
        else{
            while(!st.empty() && douutien(st.top()) >= douutien(string(1, s[i]))){
                res += st.top(); st.pop();
            }
            st.push(string(1, s[i]));
        }
    }
    while(!st.empty()){
        res += st.top(); st.pop();
    }
    cout << res << endl;
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
(A+(B+C))
((A*B)+C)
*/