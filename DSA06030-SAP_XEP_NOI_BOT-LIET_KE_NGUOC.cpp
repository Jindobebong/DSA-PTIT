#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        vector<vector<int>>ans; 
        for(int i = 0; i < n - 1; ++i){
            bool k = false;
            int min_i = i;
            for(int j = 1; j < n - i; ++j){
                if(a[j] < a[j - 1]){
                    swap(a[j], a[j - 1]);
                    k = true;
                }
            }
            vector<int>res;
            if(k == false)
                break;
            for(auto x : a)
                res.push_back(x);
            ans.push_back(res);
        }
        reverse(ans.begin(), ans.end());
        int l = ans.size();
        for(auto x : ans){
            cout << "Buoc " << l-- << ": ";
            for(int i : x)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}