#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        vector<int>a(n), b(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        b = a;
        sort(b.begin(), b.end());
        int l, r;
        for(int i = 0; i < n; ++i)
            if(a[i] != b[i]) {
                l = i; 
                break;
            }
        for(int i = n - 1; i >= 0; --i)
            if(a[i] != b[i]) {
                r = i; 
                break;
            }
        cout << l + 1 << " " << r + 1 << "\n";
    }
    return 0;
}