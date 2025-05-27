#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, s;
vector<int>a;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> s;  
        a.resize(n); 
        for(int i = 0; i < n; ++i) cin >> a[i];
        
        int dp[s + 5] = {};
        for(int i = 0; i < n; ++i){
            dp[a[i]] = 1;
            for(int j = s; j >= a[i]; --j){
                if(dp[j - a[i]]) dp[j] = 1;
            }
        }
        if(dp[s]) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}