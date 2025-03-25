#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n, k; cin >> t; 
    while(t--){
        cin >> n >> k; int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];

        sort(a, a + n);

        bool ok = 1;

        for(int i = 0; i < n; ++i){
            bool kt = 0;
            for(int j = i + 1; j < n; ++j){
                auto it = binary_search(a + j + 1, a + n, k - a[i] - a[j]);
                if(it){
                    cout << "YES";
                    kt = 1;
                    ok = 0; 
                    break;
                }
            }
            if(kt) break;
        }

        if(ok) cout << "NO";

        cout << "\n";
    }
    return 0;
}