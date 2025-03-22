#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n];
    vector<vector<int>>ans;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i){
        int j = i; 
        while(j > 0 && a[j] < a[j - 1]){
            swap(a[j], a[j - 1]);
            --j;
        }
        vector<int>res;
        for(int j = 0; j <= i; ++j)
            res.push_back(a[j]);
        ans.push_back(res);
    }
    reverse(ans.begin(), ans.end());
    for(auto x : ans){
        cout << "Buoc " << n-- - 1 << ": ";
        for(auto i : x)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}