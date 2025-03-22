#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int, int>p1, pair<int, int>p2){
    if(p1.second != p2.second)
        return p1.second < p2.second;
    return p1.first < p2.first;
}
int t, n;

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        vector<pair<int, int>>v(n); 
        for(int i = 0; i < n; ++i)
            cin >> v[i].first;
        for(int i = 0; i < n; ++i)
            cin >> v[i].second;
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

