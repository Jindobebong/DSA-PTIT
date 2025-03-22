#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; 
    vector<int>a(n + 5), f(n + 5, 0);
    for(int i = 1; i <= n; ++i) cin >> a[i];

    int ans = -1e9;
    for(int i = 1; i <= n; ++i){
        f[a[i]] = f[a[i] - 1] + 1;
        ans = max(ans, f[a[i]]);
    }

    cout << n - ans;
    return 0;
}
/* SẮP XẾP DÃY TĂNG DẦN
chọn 1 số bất kì và đưa lên đầu dãy hoặc cuối dãy (tìm số bước tối thiểu)
--> nếu đã có 1 đoạn con với các phần tử tăng dần, k cần di chuyển phần tử trong đoạn này
        --> chỉ cần di chuyển các phần tử bên ngoài mảng con đó
        --> số bước tối thiểu = n -  độ dài dãy con tăng dài nhất 
        --> sử dụng quy hoạch động tìm độ dài dãy con tăng dài nhất

Ví dụ: 
5 
4 1 2 5 3

f[4] = f[3] + 1 = 1
f[1] = f[0] + 1 = 1
f[2] = f[1] + 1 = 1 + 1 = 2
f[5] = f[4] + 1 = 1 + 1 = 2
f[3] = f[2] + 1 = 2 + 1 = 3
*/