#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n; 
    vector<int>A(n);
    for(int i = 0; i < n; ++i)
        cin >> A[i];
    
    int ans = INT_MAX;

    for(int q = 0; q <= 2000; ++q){
        vector<int>B;
        bool ok = 1;

        for(int i = 0; i < n; ++i){
            int a = A[i], b;
            if(q == 0){
                b = a + 1; // vì floor(a / b) = 0 <=> b > a
            }
            else{
                int low = a / (q + 1) + 1;
                int high = a / q;
                if(low > high){
                    ok = 0; 
                    break;
                }
                b = low; // chọn B[i] nhỏ nhất để giảm tổng
            }
            B.push_back(b);
        }
        if(ok){
            int total = accumulate(B.begin(), B.end(), 0);
            ans = min(ans, total);
        }
    }
    cout << ans;
    return 0;
}