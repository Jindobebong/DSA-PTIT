#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[50], t;
int main()
{
    cin >> t;
    while(t--){
        cin >> n >> k;
        int cnt[50] = {}, ans = 0;
        for(int i = 1; i <= k; ++i)
        {
            cin >> a[i];
            cnt[a[i]] = 1;
        }
        int j = k;
        while(j >= 1 && a[j] == n - k + j)
            --j; 
        if(j == 0) cout << k; 
        else{
            a[j]++;
            for(int i = j + 1; i <= k; ++i)
                a[i] = a[i - 1] + 1;
            for(int i = 1; i <= k; ++i)
                if(cnt[a[i]] != 1) ++ans;
            cout << ans;
        }
        cout << "\n";
    }
    return 0;
}

/*
1->n.  k chien sy
1 3 5
1 3 6
*/