#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n; 
ll k, f[93];
void fibo(){
    f[1] = f[2] = 1; 
    for(int i = 3; i <= 93; ++i)
        f[i] = f[i - 2] + f[i - 1];
}

char solve(int n, ll k){
    if(n == 1) return '0'; 
    if(n == 2) return '1';
    if(k <= f[n - 2]) return solve(n - 2, k);
    return solve(n - 1, k - f[n - 2]);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    fibo();
    while(t--){
        cin >> n >> k; 
        cout << solve(n, k) << endl; 
    }
    return 0;
}