#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

/*
left: chỉ số bắt đầu dãy con
len: độ dài dãy sinh từ n
*/
ll countOnes(ll n, ll l, ll r, ll left = 1, ll len = -1){
    // Xử lý độ dài dãy
    if(len == -1){
        ll temp = n, length = 1; 
        while(temp > 1){
            temp /= 2;
            length = length * 2 + 1;
        }
        len = length;
    }
    // Điều kiện dừng
    if(l > left + len - 1 || r < left) return 0;
    if(n == 0) return 0;
    if(n == 1) return (l <= left && left <=r);
    // Xử lý đệ quy
    ll mid = left + len / 2;
    ll cnt = 0;

    // Trái
    cnt += countOnes(n / 2, l, r, left, len / 2);

    // Giữa
    if(l <= mid && mid <= r) cnt += n % 2;

    // Phải
    cnt += countOnes(n / 2, l, r, mid + 1, len / 2);

    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, l, r; cin >> n >> l >> r; 
        cout << countOnes(n, l, r) << endl;
    }
    return 0;
}