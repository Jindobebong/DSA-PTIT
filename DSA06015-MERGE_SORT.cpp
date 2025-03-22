#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[1000005];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i]; 
        sort(a, a + n); 
        for(int i = 0; i < n; ++i)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}