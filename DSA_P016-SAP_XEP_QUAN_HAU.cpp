#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, ans, a[30][30], sum;
bool d[200], d1[400], d2[400];

/*
chạy từ hàng r
duyệt các cột, rồi đánh dấu chéo trái và chéo phải
*/
void ql(int r){
    if(r == n + 1){
        ans = max(ans, sum);
        return;
    }
    for(int c = 1; c <= n; ++c){
        if(!d[c] && !d1[c - r + n] && !d2[c + r]){
            d[c] = d1[c - r + n] = d2[c + r] = 1;
            sum += a[r][c];
            ql(r + 1);
            sum -= a[r][c];
            d[c] = d1[c - r + n] = d2[c + r] = 0;
        }
    }
}
int main()
{
    cin >> t;
    for(int i = 1; i <= t; ++i){
        n = 8;
        ans = 0;
        memset(d, 0, sizeof(d));
        memset(d1, 0, sizeof(d1));
        memset(d2, 0, sizeof(d2));

        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
        ql(1);
        cout << "Test " << i << ": " << ans << "\n";
    }
    return 0;
}
/*
1
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
*/