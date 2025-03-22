#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, x;
int vttn(int a[], int n, int x){
    int l = 1, r = n, ans = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] <= x){
            ans = m; 
            l = m + 1;
        }
        else r = m - 1;
    }
    return ans;
}
int main()
{
    cin >> t;
    while(t--){
        cin >> n >> x; 
        int a[n + 5];
        for(int i = 1; i <= n; ++i)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        cout << vttn(a, n, x) << "\n";
    }
    return 0;
}