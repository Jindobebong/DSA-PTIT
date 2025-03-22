#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n; 
int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main()
{
    cin >> t; 
    while(t--){
        cin >> n;
        int ans = 0; 
        for(int i = 9; i >= 0; --i){
            while(n >= a[i]){
                    int t = (n / a[i]);
                    ans += t;
                    n -= t * a[i];
                }
            }   
        cout << ans << "\n";     
    }
    return 0;
}
/*
70 
ans = 1
n = 20

*/