#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[2000], b[2000];
vector<vector<int>>ans;

void ql(int i){
    if(i == n + 1){
        vector<int>v;
        int sum = 0;
        for(int j = 1; j <= n; ++j){
            if(b[j]){
                v.push_back(a[j]);
                sum += a[j];
            }
        }
        //cout << sum << endl; 
        if(sum == k){
            ans.push_back(v);
            v.clear();
        }
        return;
    }
    for(int j = 0; j <= 1; ++j){
        b[i] = j; 
        ql(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    ql(1);
    for(auto x : ans){
        for(int i = 0; i < x.size(); ++i)
            cout << x[i] << " ";
        cout << "\n";
    }
    cout << ans.size();
    return 0;
}

/*
5 50
5 10 15 20 25
*/