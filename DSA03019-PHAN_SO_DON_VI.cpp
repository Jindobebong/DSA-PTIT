#include <bits/stdc++.h>
#define int long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, p, q;
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> p >> q; 
        int x = p, y = q;
        while(x){
            int z = (y + x - 1) / x; // ceil(y / x)
            cout << "1/" << z; 
            int tu = x * z - y, mau = y * z;
            if(tu != 0){
                int g = __gcd(tu, mau); 
                x = tu / g; 
                y = mau / g;
                cout << " + ";
            }
            else break;
        }
        cout << endl;
    }
    return 0;
}
/*
chọn ra phân số lớn nhất sau đó trừ đi 
cứ tiếp tục làm như vậy
*/