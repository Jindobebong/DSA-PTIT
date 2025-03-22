#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, m, k;
int main()
{
    cin >> t; 
    while(t--){
        cin >> n >> m >> k; 
        int a[n], b[m];
        vector<int>s;

        for(int i = 0; i < n; ++i)
        {
            cin >> a[i]; 
            s.push_back(a[i]);
        }
        for(int i = 0; i < m; ++i)
        {
            cin >> b[i];
            s.push_back(b[i]);
        }
        sort(s.begin(), s.end());
        cout << s[k - 1] << "\n";
    }
    return 0;
}