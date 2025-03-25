#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

int t, n, m;
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        int x[n], y[m];
        int cnt[1005] = {0};

        for(int i = 0; i < n; ++i) cin >> x[i];
        for(int i = 0; i < m; ++i) {
            cin >> y[i];
            cnt[y[i]]++;
        }

        ll ans = 0, sum = 0;

        for(int i = 0; i < n; ++i){
            if(x[i] == 1) ans += cnt[0];
            else if(x[i] == 3) ans += (m - cnt[3]);
            else if(x[i] == 2) ans += (m- cnt[2] - cnt[3] - cnt[4]);
            else if(x[i] >= 4){
                ans += m; 
                for(int j = 2; j <= x[i]; ++j)
                    ans -= cnt[j];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

/*
x^y > y^x --- (x, y) >= 0

x = 0 -> k có số nào thoả mãn
x = 1 -> 1 > y -> có y = 0 thoả mãn
x = 2 -> 2^y > y^2 -> trừ y = 2, 3, 4
x = 3 -> 3^y > y^3 -> trừ y = 3
x = 4 -> 4^y > y^4 -> trừ y = 2, 3, 4
x = 5 -> 5^y > y^5 -> trừ y = 2, 3, 4, 5
x = 6 -> trừ y = 2, 3, 4, 5, 6
x = 7 -> trừ y = 2, 3, 4, 5, 6, 7

kết luân: 
_ x = 1 -> y = 0
_ x = 3 -> trừ y = 3
_ x = 2 -> trừ y = 2, 3, 4
_ x >= 4 -> trừ y = [2, x]
*/