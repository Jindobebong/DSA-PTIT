#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, q, l, r, a[100005];
ll dp[100005]; //tong day con lon nhat den vi tri l 
int main()
{
    cin >> n >> q; 
    for(int i = 1; i <= n; ++i)
        cin >> a[i]; 
    dp[1] = a[1]; 
    for(int i = 2; i <= n; ++i)
        //ghep ai vao day = dp[i - 1] + a[i]
        //chi lay moi ai = ai
        dp[i] = max(a[i], dp[i - 1] + a[i]);
        while(q--){
        cin >> l >> r; 
        cout << 
    }
    return 0;
}

/*
5 2
-1 2 -3 4 -5
2 4  -> 6
3 3  -> 0

[2,4] : 2 -3 4
*/