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
        stack<int>st;
        int cnt = 0, ans = INT_MIN;

        st.push(-1); 
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(') st.push(i); 
            else{
                st.pop();
                if(!st.empty()) ans = max(ans, i - st.top());
                else st.push(i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}