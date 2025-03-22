#include <bits/stdc++.h>
#define ll long long
#define maxn 1005
using namespace std;

int t, n, a[maxn];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n); 
        int i = 0, j = n - 1;
        while(i < j){
            cout << a[j] << " " << a[i] << " ";
            --j; ++i;
        }
        if(i == j) cout << a[i];
        cout << "\n";
    }
    return 0;
}