#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, m, n;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> m >> n; 
        int p[m], q[n];

        for(int i = 0; i < m; ++i) cin >> p[i]; 
        for(int j = 0; j < n; ++j) cin >> q[j];

        vector<vector<int>>v(m + n);
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                v[i + j].push_back(p[i] * q[j]);
            }
        }
        for(int i = 0; i < m + n - 1; i++){
            int sum = 0;
            for(auto x : v[i])
                sum += x;
            cout << sum << " ";
        }
        cout << endl; 
    }
    return 0;
}
/*
2
4 3
1 0 3 2
2 0 4
5 4
1 9 3 4 7
4 0 2 5
*/