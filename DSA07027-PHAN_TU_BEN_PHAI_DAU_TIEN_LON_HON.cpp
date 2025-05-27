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
        int a[n], res[n];
        stack<int>st;
        for(int i = 0; i < n; ++i) cin >> a[i];
        st.push(a[n - 1]);
        for(int i = n - 1; i >= 0; --i){
            while(!st.empty() && a[i] >= st.top())
                st.pop();
            if(st.empty()) 
                res[i] = -1;
            else res[i] = st.top();
            st.push(a[i]);
        }
        for(int i = 0; i < n; ++i)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}