#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n, k, a[20], b[20];
bool vis[20];
void backtrack(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; ++j)
            cout << b[j] << ' ';
        cout << endl;
        return;
    }

    for(int j = 1; j <= n; ++j){
        if(!vis[j] && a[j] > b[i - 1]){
            b[i] = a[j]; 
            vis[j] = 1;
            backtrack(i + 1);
            vis[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        memset(a, 0, sizeof a); 
        memset(vis, 0, sizeof vis);
        memset(b, 0, sizeof b);
        
        for(int i = 1; i <= n; ++i)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        backtrack(1);
    }
    return 0;
}