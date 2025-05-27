#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n; 
vector<vector<int>>ans;
int check(vector<int>v){
    for(int i = 0; i < v.size() - 1; ++i){
        if(v[i] < v[i + 1])
            return 0;
    }
    return 1;
}
void backtrack(int idx, int sum, vector<int>res){
    if(sum == n){
        if(check(res)) ans.push_back(res);
        return;
    }
    for(int i = n; i >= idx; --i){
        if(sum + i <= n){
            res.push_back(i);
            backtrack(idx, sum + i, res);
            res.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        ans.clear();
        backtrack(1, 0, {});
        cout << ans.size() << endl;
        for(auto x : ans){
            cout << "(";
            for(int i = 0; i < x.size(); ++i){
                cout << x[i]; 
                if(i != x.size() - 1) cout << " ";
            }
            cout << ") ";
        }
        cout << endl;
    }
    return 0;
}