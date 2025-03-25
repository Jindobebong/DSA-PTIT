#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int t, n;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; while(t--){
        cin >> n; int a[n], right[n], left[n];

        for(int i = 0; i < n; ++i) cin >> a[i];

        right[0] = a[0], left[n - 1] = a[n - 1];

        for(int i = 1; i < n; ++i)
            right[i] = max(right[i - 1], a[i]);
        
        for(int i = n - 2; i >= 0; --i)
            left[i] = min(left[i + 1], a[i]);
        
        vector<int>res;

        for(int i = 1; i < n; ++i)
            if(right[i - 1] <= left[i]) res.push_back(i);

        if(res.size() == 0) cout << 0 << endl << endl;
        else {
            cout << res.size() << "\n";
            for(int i : res)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
right[i]: phần tử lớn nhất từ vị trí 1 --> i
left[i]: phần tử nhỏ nhất từ i --> n
*/
