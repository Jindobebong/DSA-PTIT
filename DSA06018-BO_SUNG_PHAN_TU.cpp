#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[1005];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        int maxi = -1e9, mini = 1e9, cnt = 0;
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n); 
        for(int i = 1; i < n; ++i)
            if(a[i] != a[i - 1]) 
                cnt += (a[i] - a[i - 1] - 1);
        cout << cnt << "\n";
        
    }
    return 0;
}