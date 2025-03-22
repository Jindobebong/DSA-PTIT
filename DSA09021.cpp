#include <bits/stdc++.h>
#define maxn 1005
using namespace std;

int a[maxn][maxn], n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n; 
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
                cin >> a[i][j];
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j)
            if(a[i][j] == 1) cout << j << " ";
        cout << "\n";
    }
    return 0;
}