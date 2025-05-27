#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n, k, a[105];
vector<vector<int>>ans;
void backtrack(int i, vector<int>res){
    if(res.size() >= 2 && res.back() < res[res.size() - 2])
        return;
    if(i == n + 1){
        if(res.size() == k) ans.push_back(res);
        return;
    }
    // chọn ai
    res.push_back(a[i]);
    backtrack(i + 1, res);
    res.pop_back();

    // không chọn ai
    backtrack(i + 1, res);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k; 
    for(int i = 1; i <= n; ++i) cin >> a[i];
    backtrack(1, {});
    cout << ans.size();
    return 0;
}

/*
5 3 
2 5 15 10 20
*/