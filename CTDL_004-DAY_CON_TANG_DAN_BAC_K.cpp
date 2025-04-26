#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int n, k; 
vector<int>a(105), b(105);

int ans;
void backtrack(int i){
    if(i == n + 1){
        vector<int>res, x;
        for(int j = 1; j <= n; ++j)
            if(b[j]) res.push_back(a[j]);
        if(res.size() == k){
            x = res;
            sort(x.begin(), x.end());
            if(x == res) ++ans;
        }
        return;
    }
    for(int j = 0; j <= 1; ++j){
        b[i] = j; 
        backtrack(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k; 
    for(int i = 1; i <= n; ++i) cin >> a[i];
    backtrack(1);
    cout << ans; 
    return 0;
}