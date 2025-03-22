#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
using namespace std;

int t, n, m, x[maxn], y[maxn];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> m; 
        for(int i = 0; i < n; ++i)
            cin >> x[i];
        int cnt[1005] = {};
        for(int j = 0; j < m; ++j)
        {
            cin >> y[j];
            cnt[y[j]]++;
        }
        int ans = 0;
        for(int i = 0; i < n; ++i){
            int k = m;
            if(x[i] == 1) ans += cnt[0];
            else if(x[i] == 3) ans += (k - cnt[3]);
            else if(x[i] == 2) ans += (k - cnt[2] - cnt[3] - cnt[4]);
            else if(x[i] >= 4){
                for(int j = 2; j <= x[i]; ++j)
                    k -= cnt[j];
                ans += k;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}