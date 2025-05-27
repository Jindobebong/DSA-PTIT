#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n, s, a[35], ans = 35;

void backtrack(int i, int sum, int cnt){
    if(cnt >= ans) return;
    if(i == n + 1){
        if(sum == s) ans = min(ans, cnt);
        return;
    }
    // chọn ai
    if(sum + a[i] <= s)
        backtrack(i + 1, sum + a[i], cnt + 1);
    // không chọn ai
    if(sum <= s)
        backtrack(i + 1, sum, cnt);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s; 
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    backtrack(1, 0, 0);
    if(ans == 35) cout << -1;
    else cout << ans; 
    return 0;
}