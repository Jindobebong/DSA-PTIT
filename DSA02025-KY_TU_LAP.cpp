#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

string a[15], b[15];
int ans = INT_MAX, n;
bool danhdau[15];

int count(string a, string b){
    int dem = 0;
    for(auto c : a){
        for(auto x : b)
            if(c == x) ++dem;
    }
    return dem;
}

void backtrack(int i){
    if(i == n){
        int res = 0;
        for(int j = 0; j < n - 1; ++j){
            res += count(b[j], b[j + 1]);
        }
        ans = min(ans, res);
        return;
    }
    for(int j = 0; j < n; ++j){
        if(!danhdau[j]){
            b[i] = a[j]; 
            danhdau[j] = true; 
            backtrack(i + 1); 
            danhdau[j] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n; 
    for(int i = 0; i < n; ++i) cin >> a[i];
    backtrack(0);
    cout << ans;
    return 0;
}