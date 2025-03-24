#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t; while(t--){
        cin >> n; int a[n];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        int right[n], left[n]; //right[i] : phần từ lớn nhất kết thúc tại i(0 --> i), left[i] : phần tử nhỏ nhất trong đoạn i + 1 --> n
        // nếu như right[i - 1] : thằng lớn nhất trong đoạn từ 1 --> i - 1 <= thằng nhỏ nhất trong đoạn từ i --> cuối dãy --> có thể sắp xếp
        right[1] = a[1];
        for(int i = 2; i <= n; ++i)
            right[i] = max(right[i - 1], a[i]);
        
        left[n] = a[n];

        for(int i = n - 1; i >= 1; --i)
            left[i] = min(left[i + 1], a[i]);

        vector<int>k; 
        
        for(int i = 2; i <= n; ++i)
            if(right[i - 1] <= left[i]) k.push_back(i);
        
        cout << k.size() << "\n";

        if(k.size() != 0){
            for(auto x : k)
                cout << x - 1 << " ";
            // cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}

/*
2 1 3 5 4

4 4 3 1 1
*/