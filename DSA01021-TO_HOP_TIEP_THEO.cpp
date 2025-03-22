#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[43], t;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        int b[50] = {0};
        for(int i = 1; i <= k; ++i)
        {
            cin >> a[i];
            b[a[i]] = 1;
        }
        int j = k;
        while(j >= 1 && a[j] == n - k + j)
            --j; 
        if(j == 0) cout << k << endl; 
        else{
            a[j]++;
            for(int i = j + 1; i <= k; ++i)
                a[i] = a[i - 1] + 1;
            int cnt = 0;
            for(int i = 1; i <= k; ++i)
            {
                if(b[a[i]] != 1) ++cnt;
            }
            cout << cnt << endl;
        }
        
    }
    return 0;
}