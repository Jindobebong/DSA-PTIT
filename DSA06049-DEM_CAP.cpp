#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n, k; cin >> t; while(t--){
        cin >> n >> k; int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        ll ans = 0; 
        for(int i = 0; i < n; ++i){
            auto it = lower_bound(a + i + 1, a + n, a[i] + k);
            if(it != a + i + 1) ans += 1ll * (it - a - i - 1);
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
aj - ai < k
aj < ai + k

dùng lower_bound : đếm thằng lớn hơn hoặc bằng ai + k, sau đó giảm đi 1
số lượng phần tử thoả mãn là từ vị trí i + 1 cho đến vị trí lower_bound
*/