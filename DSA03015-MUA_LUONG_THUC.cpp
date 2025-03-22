#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, s, m;

int main()
{
    cin >> t;
    while(t--){
        cin >> n >> s >> m;
        int can = s * m, cothemua = n * s;
        int songay = (can + n - 1) / n, songaycothe = s - s / 7;
        if(songay > songaycothe) cout << -1;
        else cout << (can + n - 1) / n;
        cout << "\n";
    }
    return 0;
}

/*
n s m

n=16
s=10
m=2

trong 1 ngày có thể mua tối đa 16. cần tồn tại trong 10 ngày, biết mỗi ngày cần 2.tìm số ngày mua lương thực ít nhất để tồn tại
n                                               s                        m

s * m = 10 * 2 = 20

n=20 s=10 m=30
trong 1 ngày mua tối đa 20. tồn tại trong 10 ngày, mỗi ngày cần 30.
--> cần 300 300/20
10*30 = 300
Mua tất cả các ngày trừ thứ 7

số ngày = (can + n - 1) / n
số ngày có thể = s - s / 7  --> trừ đi thứ 7
*/


