#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t; 
    for(int i = 0; i < t; ++i){
        cin >> n; 
        int a[n];
        vector<vector<int>>ans;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n - 1; ++i){
            vector<int>res;
            for(int j = i + 1; j < n; ++j){
                if(a[j] < a[i]) swap(a[j], a[i]);
            }
            for(auto x : a)
                res.push_back(x);
            ans.push_back(res);
        }
        reverse(ans.begin(), ans.end());
        for(auto x : ans){
            cout << "Buoc " << n-- - 1 << ": ";
            for(int j = 0; j < x.size(); ++j)
                cout << x[j] << ' ';
            cout << endl;
        }
    }
    
    return 0;
}

/*
1
6
5 8 3 9 1 4

Buoc 5: 1 3 4 5 8 9
Buoc 4: 1 3 4 5 9 8
Buoc 3: 1 3 4 9 8 5
Buoc 2: 1 3 8 9 5 4
Buoc 1: 1 8 5 9 3 4
*/