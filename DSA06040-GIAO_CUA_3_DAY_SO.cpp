#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    int t, n1, n2, n3; cin >> t; 
    while(t--){
        cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];

        vector<int>res;
        for(int i = 0; i < n1; ++i) cin >> a[i];
        for(int i = 0; i < n2; ++i) cin >> b[i];
        for(int i = 0; i < n3; ++i) cin >> c[i];

        int i = 0, j = 0, k = 0; 
        
        while(i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && b[j] == c[k]){
                res.push_back(a[i]);
                ++i; ++j; ++k;
            }
            else if(a[i] < b[j]) ++i;
            else if(b[j] < c[k]) ++j; 
            else if(c[k] < a[i]) ++k;
        }

        if(res.size()){
            for(int i : res)
                cout << i << " ";
        }
        else cout << -1;
        
        cout << "\n";
    }
    return 0;
}