#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[40];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n);
        ll x1 = 0, x2 = 0; 
        int i = 0; 
        while(i < n){
            x1 = x1 * 10 + a[i]; 
            ++i; 
            if(i < n) x2 = x2 * 10 + a[i];
            ++i;
        }
        //cout << x1 << " " << x2 << "\n";
        cout << x1 + x2 << "\n";
    }
    return 0;
}
/*
2
6
6 8 4 5 2 3
2 3 4 5 6 8

5
5 3 0 7 4
0 3 4 5 7
04
35
*/