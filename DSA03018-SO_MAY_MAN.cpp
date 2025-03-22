#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        int x, y;
        bool ok = 1;
        for(x = n / 7; x >= 0; --x){
            if((n - 7 * x) % 4 == 0){
                y = (n - 7 * x) / 4;
                ok = 0;
                break;
            }
        }
        if(ok) cout << -1;
        else{
            for(int i = 0; i < y; ++i)
                cout << 4; 
            for(int i = 0; i < x; ++i)
                cout << 7;
        }
        cout << "\n";
    }
    return 0;
}