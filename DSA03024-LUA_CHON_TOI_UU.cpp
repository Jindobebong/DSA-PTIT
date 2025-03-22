#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define p pair<int, int>
bool cmp(p x, p y){
    if(x.second != y.second)
        return x.second < y.second;
    return x.first < y.first;
}
int t, n;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        vector<p>v(n);
        for(int i = 0; i < n; ++i)
            cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end(), cmp);
        int cnt = 0, j = 0, i = 1; 
        while(i < n){
            if(v[j].second <= v[i].first){
                ++cnt; 
                j = i; 
                ++i;
            }
            else ++i;
        }
        cout << cnt + 1 << "\n";
    }
    return 0;
}