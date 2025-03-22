#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define maxn 1000005
int t, n, m, a[maxn], b[maxn];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        multiset<int>s;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            s.insert(a[i]);
        } 
        for(int i = 0; i < m; ++i){
            cin >> b[i]; 
            s.insert(b[i]);
        }
        for(auto x : s)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}