#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, x, a[1000005];

int main()
{
    cin >> t;
    while(t--){
        cin >> n >> x; 
        set<int>s;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i]; 
            s.insert(a[i]);
        }
        if(s.find(x) != s.end()) cout << 1; 
        else cout << -1; 
        cout << "\n";
    }
    return 0;
}