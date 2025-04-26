#include <bits/stdc++.h>
using namespace std;

int t, n, a[25][25], d[25];
int ans, sum;

void backtrack(int r){
    if(r == n + 1){
        ans = max(ans, sum);
        return;
    }
    for(int c = 1; c <= n; ++c){
        if(!d[c]){
            d[c] = 1;
            sum += a[r][c];
            backtrack(r + 1);
            d[c] = 0;
            sum -= a[r][c];
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        
        ans = sum = 0;
        memset(a, 0, sizeof a);
        memset(d, 0, sizeof d);
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                cin >> a[i][j];
        
        backtrack(1);
        
        cout << ans << endl;
    }    
    return 0;
}