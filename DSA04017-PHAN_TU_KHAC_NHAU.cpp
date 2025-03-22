#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n; 

int main()
{
    cin >> t; 
    while(t--){
        cin >> n;
        int a[n + 5], b[n + 5];
        for(int i = 1; i <= n; ++i)
            cin >> a[i]; 
        for(int i = 1; i < n; ++i)
            cin >> b[i];
        int i = 1;
        bool ok = 1;
        while(i < n){
            if(a[i] != b[i]) {
                ok = 0;
                cout << i; 
                break;
            }
            ++i;
        }
        if(ok) cout << a[n];
        cout << "\n";
    }
    return 0;
}