#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n;
ll f[93], i;
void fibo(){
    f[1] = f[2] = 1; 
    for(int i = 3; i <= 92; ++i)
        f[i] = f[i - 2] + f[i - 1];
}
char solve(int n, ll i){
    if(n == 1) return 'A'; 
    if(n == 2) return 'B';
    if(i <= f[n - 2]) return solve(n - 2, i); 
    return solve(n - 1, i - f[n - 2]);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    fibo();
    while(t--){
        cin >> n >> i; 
        cout << solve(n, i) << endl;
    }
    return 0;
}