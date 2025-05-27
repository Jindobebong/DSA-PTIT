#include <bits/stdc++.h>
#define int long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, s, a[35], ans = 35;
bool found;

void backtrack(int i, int sum, int cnt){
    if(found && cnt >= ans) return;
    if(sum == s){
        ans = cnt; 
        found = true;
        return;
    }
    if(i == n + 1) return;
    
    // chọn ai
    if(sum + a[i] <= s){
        backtrack(i + 1, sum + a[i], cnt + 1);
    }

    // không chọn ai
    if(sum <= s){
        backtrack(i + 1, sum, cnt);
    }
}
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> s; 
        memset(a, 0, sizeof a);
        for(int i = 1; i <= n; ++i) cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        
        ans = 35;
        found = false;

        backtrack(1, 0, 0);
        if(found)
            cout << ans << endl; 
        else 
            cout << -1 << endl; 
    }
    return 0;
}