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
        vector<int>a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        // ng: lưu chỉ số phần tử lớn hơn, rs: lưu giá trị phần tử nhỏ hơn
        vector<int>ng(n), rs(n);
        stack<int>st1, st2;
        st1.push(n - 1);
        for(int i = n - 1; i >= 0; --i){
            while(!st1.empty() && a[i] >= a[st1.top()])
                st1.pop();
            if(st1.empty()) ng[i] = -1;
            else ng[i] = st1.top();
            st1.push(i);
        }
        st2.push(a[n - 1]);
        for(int i = n - 1; i >= 0; --i){
            while(!st2.empty() && a[i] <= st2.top())
                st2.pop();
            if(st2.empty()) rs[i] = -1;
            else rs[i] = st2.top();
            st2.push(a[i]);
        }
        for(int i = 0; i < n; ++i){
            if(ng[i] == -1) cout << -1 << " ";
            else cout << rs[ng[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}