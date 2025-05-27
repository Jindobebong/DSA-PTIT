#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, m, n, a[15][15], ans = 0;
void backtrack(int r, int c){
    if(r == m && c == n){
        ++ans;
    }
    // nếu đi xuống dưới được
    if(r + 1 <= m){
        backtrack(r + 1, c);
    }
    // nếu đi sang phải được
    if(c + 1 <= n){
        backtrack(r, c + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> m >> n; 
        for(int i = 1; i <= m; ++i)
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        ans = 0;
        backtrack(1, 1);
        cout << ans << endl;
    }
    return 0;
}