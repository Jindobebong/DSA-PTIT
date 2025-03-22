#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; int a[n];
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        vector<int>right(n, 1), left(n, 1);

        for(int i = 1; i < n; ++i){
            if(a[i] > a[i - 1]) 
                right[i] = right[i - 1] + 1;
        }
        for(int i = n - 2; i >= 0; --i)
            if(a[i] > a[i + 1])
                left[i] = left[i + 1] + 1;
        int ans = -1e9;

        for(int i = 1; i < n; ++i)
            ans = max(ans, left[i] + right[i] - 1);
        cout << ans << "\n";
    }
    return 0;
}

/*
right[i]: độ dài dãy tăng dần kết thúc tại i
left[i]: độ dài dãy giảm dần bắt đầu tại i

20 4 1 2 3 4 2 10

right: 1 1 1 2 3 4 1 2
left(ngược): 1 1 2 1 1 1 2 3
left: 3 2 1 1 1 2 1 1
*/