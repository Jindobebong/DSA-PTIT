#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, x; 
vector<int>a;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> x; 
        a.resize(n);
        int ans = 0, id;

        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i){
            if(a[i] <= x) {
                if(a[i] > ans){
                    ans = a[i];
                    id = i + 1;
                }
            }
        }
        if(ans) cout << id << endl;
        else cout << -1 << endl;
    }
    return 0;
}