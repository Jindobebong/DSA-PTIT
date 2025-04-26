#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

ll t, n, k; 

ll solve(ll n, ll k){
    ll mid = 1ll << (n - 1); //giữa đoạn 
    if(k == mid) return n; 
    if(k < mid) return solve(n - 1, k); 
    return solve(n - 1, k - mid);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k; 
        cout << solve(n, k) << endl;
    }
    return 0;
}

/*
solve(n, k): tìm phần tử thứ k trong mảng s(n)
khi k < mid thì tìm trong nửa đoạn đầu thôi, cứ chặt đôi ra mà tìm
còn khi k > mid chuyển từ tìm đoạn cuối sang tìm đoạn đầu vì 2 đoạn như nhau
*/