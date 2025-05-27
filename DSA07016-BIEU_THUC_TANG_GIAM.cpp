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
        int num = 1;
        stack<int>st;
        string res = "";
        for(int i = 0; i <= s.size(); ++i){
            st.push(num++);
            if(s[i] == 'I' || i == s.size()){
                while(!st.empty()){
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << res << endl;
    }
    return 0;
} 
