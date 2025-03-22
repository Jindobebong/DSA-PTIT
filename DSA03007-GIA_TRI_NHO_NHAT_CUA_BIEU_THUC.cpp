#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, t;
ll Min(ll a[], ll b[])
{
    ll sum = 0;
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n], b[n];
        ll sum = 1e18;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sum = min(Min(a, b), Min(b, a));
        cout << sum << endl;
    }
}