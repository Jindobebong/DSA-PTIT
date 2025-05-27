#include <bits/stdc++.h>
#define int long long
#define maxn 1000005
#define endl "\n"
using namespace std;

main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        // left: lưu chỉ số gần nhất bên trái nhỏ hơn
        // right: lưu chỉ số gần nhất bên phải nhỏ hơn
        vector<int>left(n), right(n);
        stack<int>st1, st2;

        for(int i = 0; i < n; ++i){
            while(!st1.empty() && a[i] <= a[st1.top()])
                st1.pop();
            if(st1.empty()) left[i] = -1; 
            else left[i] = st1.top();
            st1.push(i);
        }

        for(int i = n - 1; i >= 0; --i){
            while(!st2.empty() && a[i] <= a[st2.top()])
                st2.pop();
            if(st2.empty()) right[i] = n; 
            else right[i] = st2.top();
            st2.push(i);
        }
        int ans = -1e9;
        for(int i = 0; i < n; ++i)
            ans = max(ans, a[i] * (right[i] - left[i] - 1));
        cout << ans << endl;
    }
    return 0;
}