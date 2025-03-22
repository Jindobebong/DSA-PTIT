#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;
int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        int a[n], prefix_max[n], prefix_min[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        prefix_max[0] = a[0];
        for(int i = 1; i <= n; ++i){
            prefix_max[i] = max(prefix_max[i - 1], a[i]);
        }
        prefix_min[n - 1] = a[n - 1];
        for(int i = n - 2; i >= 0; --i)
            prefix_min[i] = min(prefix_min[i + 1], a[i]);
        vector<int>kq; 
        for(int i = 1; i < n; ++i)
            if(prefix_max[i - 1] <= prefix_min[i])
                kq.push_back(i);
        if(kq.size() == 0)
            cout << 0 << "\n";
        else{
            cout << kq.size() << "\n";
            for(auto x : kq)
                cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

1 1 3 4 4
/*
2 1 3 5 4

giá trị lớn nhất của đoạn đầu (1 --> m) <= giá trị nhỏ nhất của đoạn cuối (m + 1 --> n)

--> prefixmax[i]: giá trị lớn nhất từ vị trí 0 --> i
--> prefixmin[i]: giá trị nhỏ nhất từ vị trí i --> n - 1
*/