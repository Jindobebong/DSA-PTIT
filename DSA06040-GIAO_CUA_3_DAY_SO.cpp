#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

int t, n1, n2, n3;
main()
{
    cin >> t; 
    while(t--){
        cin >> n1 >> n2 >> n3; 
        multimap<int, int>m;
        int a[n1], b[n2], c[n3];
        for(int i = 0; i < n1; ++i) cin >> a[i];
        for(int i = 0; i < n2; ++i) cin >> b[i];
        for(int i = 0; i < n3; ++i) cin >> c[i];
        vector<int>res;
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && b[j] == c[k]){
                res.push_back(a[i]);
                ++i; ++j; ++k;
            }
            else if(a[i] > b[j]) ++j; 
            else if(b[j] > c[k]) ++k; 
            else if(c[k] > a[i]) ++i; 
        }
        if(res.size() == 0) cout << -1; 
        else{
            for(int i : res)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}