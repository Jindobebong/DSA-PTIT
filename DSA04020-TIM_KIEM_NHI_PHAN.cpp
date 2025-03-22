#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, k; 

int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        vector<int>a(n);
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        int ok = 1;
        for(int i = 0; i < n; ++i){
            if(a[i] == k){
                cout << i + 1 << "\n";
                ok = 0;
                break;
            }
        }
        if(ok) cout << "NO\n";
    }
    return 0;
}