#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define endl "\n"
using namespace std;

int t, n, k, a[15][15], b[15][15];

//Nhân 2 ma trận x, y sau đó lưu vào x
void mul(int x[15][15], int y[15][15]){
    int tmp[15][15] = {}; //mảng phụ để lưu trung gian
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            int res = 0; 
            for(int k = 1; k <= n; ++k){
                res = (res + x[i][k] * y[k][j]) % MOD;
            }
            tmp[i][j] = res;
        }
    }
    //chuyển từ tmp về x
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j)
            x[i][j] = tmp[i][j];
    }
}

void Pow(int a[15][15], int k){
    if(k <= 1)
        return;
    Pow(a, k / 2);
    mul(a, a);
    if(k % 2) mul(a, b);
}
main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> k;
        memset(a, 0, sizeof a); 
        memset(b, 0, sizeof b);

        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                cin >> a[i][j]; 
                b[i][j] = a[i][j]; //lưu để tính trong trường hợp k lẻ
            }
        }
        Pow(a, k);

        int res = 0; 
        for(int i = 1; i <= n; ++i)
            res = (res + a[i][n]) % MOD;
        cout << res << endl; 
    }
    return 0;
}