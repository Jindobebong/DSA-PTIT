#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

bool kt(string s){
    stack<char>st;
    for(char c : s){
        if(c == '(' || c == '[' || c == '{')
            st.push(c);
        else{
            if(st.empty()) return false;
            char top = st.top();
            if((c == ')' && top != '(')
            || (c == ']' && top != '[')
            || (c == '}' && top != '{'))
                return false;
            st.pop();
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string s; cin >> s;
        if(kt(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}