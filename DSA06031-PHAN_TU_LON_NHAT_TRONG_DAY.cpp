#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, k, a[100005];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        for(int i = 1; i <= n; ++i) 
            cin >> a[i];
        multiset<int>s;
        for(int i = 1; i <= k; ++i)
            s.insert(a[i]);
        cout << *s.rbegin() << ' ';
        for(int i = 2; i <= n - k + 1; ++i)
        {
            s.erase(s.find(a[i - 1])); 
            s.insert(a[i + k - 1]); 
            cout << *s.rbegin() << ' ';
        }
        cout << "\n";
    }
    return 0;
}