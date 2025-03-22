#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[100005];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i]; 
        int ok = 1;
        map<int, int>mp;
        for(int i = 0; i < n; ++i){
            mp[a[i]]++;
        }
        for(int i = 0; i < n; ++i)  
            if(mp[a[i]] > 1) {
                cout << a[i]; 
                ok = 0; break;
            }
        if(ok) cout << "NO";
        cout << "\n";
    }
    return 0;
}