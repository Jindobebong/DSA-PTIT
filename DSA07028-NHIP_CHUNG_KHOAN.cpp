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
        int n; cin >> n; 
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        stack<int>st;
        for(int i = 0; i < n; ++i){
            while(!st.empty() && a[i] >= a[st.top()])
                st.pop();
            if(st.empty()) cout << i + 1 << " ";
            else cout << i - st.top() << " ";
            st.push(i);
        }
        cout << endl;
    }
    return 0;
}