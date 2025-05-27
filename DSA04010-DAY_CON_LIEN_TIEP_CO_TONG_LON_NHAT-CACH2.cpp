#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n; 
vector<int>a;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        a.resize(n);
        int ans = 0, sum = 0;

        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i){
            sum += a[i]; 
            if(sum < 0) sum = 0;
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}