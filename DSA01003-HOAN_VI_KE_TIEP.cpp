#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, t, a[1005];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 1; i <= n; ++i)
            cin >> a[i]; 
        int i = n - 1; 
        while(i >= 1 && a[i] >= a[i + 1])
            --i;
        int j = n; 
        if(i == 0){
            for(int i = 1; i <= n; ++i)
                cout << i << ' ';
            cout << endl;
        }
        else{
            while(a[i] > a[j]) --j; 
            swap(a[i], a[j]); 
            reverse(a + i + 1, a + n + 1);
            for(int i = 1; i <= n; ++i)
                cout << a[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}