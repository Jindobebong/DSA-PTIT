#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, a[15][15];
vector<string>ans;
bool ok;

void backtrack(int r, int c, string res){
    if(r == n && c == n){
        ok = 1;
        ans.push_back(res);
        return;
    }
    //nếu xuống dưới được
    if(a[r + 1][c] == 1 && r + 1 <= n){
        backtrack(r + 1, c, res + "D");
    }
    // nếu sang phải được
    if(a[r][c + 1] == 1 && c + 1 <= n){
        backtrack(r, c + 1, res + "R");
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        ok = 0; 
        ans.clear();
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        }
        if (a[1][1] == 0 || a[n][n] == 0) {
            cout << -1 << endl;
            continue;
        }

        backtrack(1, 1, "");
        if(ok){
            for(auto x : ans)
                cout << x << " ";
        }
        else cout << -1;
        cout << endl;
    }
    return 0;
}