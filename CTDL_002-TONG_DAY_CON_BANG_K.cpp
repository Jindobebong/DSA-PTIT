#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n, k, a[25];
vector<vector<int>>ans;
void backtrack(int idx, int sum, vector<int>res){
    if(sum == k){
        ans.push_back(res);
        return;
    }

    for(int i = idx; i <= n; ++i){
        if(sum + a[i] <= k){
            res.push_back(a[i]);
            backtrack(i + 1, sum + a[i], res);
            res.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k; 
    for(int i = 1; i <= n; ++i) cin >> a[i];
    backtrack(1, 0, {});

    reverse(ans.begin(), ans.end());
    for(auto x : ans){
        for(auto i : x) cout << i << " ";
        cout << endl; 
    }
    cout << ans.size();
    return 0;
}