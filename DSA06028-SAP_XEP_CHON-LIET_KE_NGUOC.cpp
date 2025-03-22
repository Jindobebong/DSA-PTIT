#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n];
    vector<vector<int>>ans;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n - 1; ++i){
        int min_i = i;
        for(int j = i + 1; j < n; ++j){
            if(a[j] < a[min_i]){
                min_i = j;
            }
        }
        swap(a[min_i], a[i]);
        vector<int>res;
        for(auto x : a)
            res.push_back(x);
        ans.push_back(res);
    }
    reverse(ans.begin(), ans.end());
    for(auto x : ans){
        cout << "Buoc " << n-- - 1<< ": ";
        for(auto i : x)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}