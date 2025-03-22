#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[1005];
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        int ans = 0; 
        for(int i = 0; i < n - 1; ++i){
            int min_i = i;
            for(int j = i + 1; j < n; ++j)
                if(a[j] < a[min_i]){
                    min_i = j;
                }
            if(min_i != i){
                swap(a[i], a[min_i]);
                ++ans;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}