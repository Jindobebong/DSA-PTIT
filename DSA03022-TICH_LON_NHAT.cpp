#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[10005];

int main()
{
    cin >> n; 
    for(int i = 0; i < n; ++i)
        cin >> a[i]; 
    sort(a, a + n);
    cout << max({a[0] * a[1], a[n - 1] * a[n - 2], 
    a[0] * a[1] * a[n - 1], a[n - 1] * a[n - 2] * a[n - 3]});
    return 0;
}