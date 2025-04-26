#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n; int a[n]; 
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int x; cin >> x; 
    for(int i = 1; i <= n; ++i)
        if(a[i] != x) cout << a[i] << " ";
    return 0;
}