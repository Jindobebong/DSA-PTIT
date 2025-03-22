#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[100], b[100];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i]; 
            b[i] = a[i];
        }
        sort(b, b + n);
        int mid = n / 2;
        bool ok = 1;
        for(int i = 0; i < n; ++i){
            if(a[i] != b[i]){
                if((i < mid && a[i] < a[mid]) || (i > mid && a[i] > a[mid])){
                    cout << "No\n";
                    ok = 0;
                    break;
                }
            }
        }
        if(ok) cout << "Yes\n";
    }
    return 0;
}