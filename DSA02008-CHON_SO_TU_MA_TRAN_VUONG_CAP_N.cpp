#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n, k, a[15][15];
bool d[15];
vector<vector<int>>ans;

void backtrack(int r, int sum, vector<int>res){
    if(r == n + 1){
        if(sum == k){
            ans.push_back(res);
        }
        return;
    }
    for(int c = 1; c <= n; c++){
        if(!d[c]){
            d[c] = 1;
            res.push_back(c);
            backtrack(r + 1, sum + a[r][c], res);
            d[c] = 0; 
            res.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k; 
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];
    backtrack(1, 0, {});
    cout << ans.size() << endl; 
    for(auto x : ans){
        for(auto i : x)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}