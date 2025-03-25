#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
using namespace std;

int t, n;
//ctor<int>a(maxn), b(maxn);

int main()
{
    cin >> t; while(t--){
        cin >> n; 

        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i)  cin >> a[i];
        
        b = a;

        sort(b.begin(), b.end());

        int l = 0, r = n - 1;

        for(int i = 0; i < n; ++i) {
            if(b[i] != a[i]) {
                l = i; break;
            }
        }

        for(int i = n - 1; i >= 0; --i){
            if(b[i] != a[i]) {
                r = i; break;
            }
        }

        cout << l + 1 << " " << r + 1 << "\n";
    }
    return 0;
}