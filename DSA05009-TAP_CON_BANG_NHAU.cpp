#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[205];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        int s = 0; 
        for(int i = 1; i <= n; ++i){
            cin >> a[i]; 
            s += a[i];
        }
        if(s % 2) cout << "NO"; //chẵn thì mới chia đôi
        else cout << "YES";
        cout << "\n";
    }
    return 0;
}