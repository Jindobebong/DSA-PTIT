#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, ans;
bool d[20], d1[30], d2[30];

/*
chạy từ hàng r
duyệt các cột, rồi đánh dấu chéo trái và chéo phải
*/
void ql(int r){
    if(r == n + 1){
        ++ans; 
        return;
    }
    for(int c = 1; c <= n; ++c){
        if(!d[c] && !d1[c - r + n] && !d2[c + r]){
            d[c] = d1[c - r + n] = d2[c + r] = 1;
            ql(r + 1);
            d[c] = d1[c - r + n] = d2[c + r] = 0;
        }
    }
}
int main()
{
    cin >> t;
    while(t--){
        cin >> n; 
        ql(1);
        cout << ans << "\n";
        ans = 0;
    }
    return 0;
}