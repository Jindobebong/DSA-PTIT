#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n, a[35], b[35], ans = 50;
ll s;
bool ok; 

void backtrack(int i, ll sum, int cnt){
    if(sum > s) return; //tổng vượt quá s -> dừng
    if(i == n + 1){
        if(sum == s){
            ok = 1;
            ans = min(ans, cnt);
        }
        return;
    }

    //ko chọn ai
    backtrack(i + 1, sum, cnt); 
    //chọn ai
    backtrack(i + 1, sum + a[i], cnt + 1);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s; 
    for(int i = 1; i <= n; ++i)
        cin >> a[i]; 
    backtrack(1, 0, 0);
    if(!ok) cout << -1;
    else cout << ans; 
    return 0;
}