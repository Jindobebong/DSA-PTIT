#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[1005], t, n, k; 
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        for(int i = 1; i <= k; ++i)
            cin >> a[i]; 
        int m = k; 
        while(m >= 1 && a[m] == n - k + m)
            --m; 
        int check = 1;
        if(m == 0) {
            for(int i = 1; i <= k; ++i)
                cout << i << ' ';
            cout << endl; 
        }
        else{
            a[m]++; 
            for(int j = m + 1; j <= k; ++j)
                a[j] = a[j - 1] + 1;
            for(int j = 1; j <= k; ++j)
                cout << a[j] << ' ';
            cout << endl;
        }
    }
    return 0;
}