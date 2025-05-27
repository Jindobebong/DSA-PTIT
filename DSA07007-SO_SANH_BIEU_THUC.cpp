#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

string chuyen(string s){
    string res = "";
    stack<int>st; 
    st.push(1);
    int cur = 1; // 1: dương, -1: âm
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '+')
            cur = 1;
        else if(s[i] == '-')
            cur = -1;
        else if(s[i] == '('){
            st.push(st.top() * cur);
            cur = 1;
        }
        else if(s[i] == ')')
            st.pop();
        else if(isalpha(s[i])){
            int total = st.top() * cur;
            if(!res.empty()) res += (total == 1 ? '+' : '-');
            else if(total == -1) res += '-';
            res += s[i];
            cur = 1;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string s1, s2; 
        cin >> s1 >> s2;
        if(chuyen(s1) == chuyen(s2)) cout << "YES"; 
        else cout << "NO";
        cout << endl;
    }
    return 0;
}