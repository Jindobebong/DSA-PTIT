#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
#define endl "\n"
using namespace std;


int t, n; 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        int a[n], cnt[n] = {0};
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        //chia đôi mảng
        int i = 0, j = n / 2, dem = 0; 
        while(i < n / 2 && j < n){
            if(a[j] >= 2 * a[i]){
                ++dem; 
                ++i; 
                ++j;
            }
            else ++j;
        }
        cout << n - dem << endl;
        //dem: số con chui được vào túi
        //đề yêu cầu tìm số con lộ mặt => n - dem
    }
    return 0;
}
