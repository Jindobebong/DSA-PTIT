#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, x, a[25];
vector<vector<int>>ans;
void backtrack(int idx, int sum, vector<int>res){
    if(sum == x){
        ans.push_back(res);
        return;
    }
    for(int i = idx; i <= n; ++i){
        if(sum + a[i] <= x){
            // chọn ai
            res.push_back(a[i]); 
            backtrack(i, sum + a[i], res); // tiếp tục từ i vì được chọn lại
            res.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> x; 
        ans.clear();
        for(int i = 1; i <= n; ++i) cin >> a[i];
        sort(a + 1, a + n + 1);
        backtrack(1, 0, {});
        if(ans.size() == 0) cout << -1;
        else{
                for(auto x : ans){
                cout << "[";
                for(int i = 0; i < x.size(); ++i){
                    if(i > 0) cout << " ";
                    cout << x[i];
                }
                cout << "]";
            }
        }
        cout << endl; 
    }
    return 0;
}