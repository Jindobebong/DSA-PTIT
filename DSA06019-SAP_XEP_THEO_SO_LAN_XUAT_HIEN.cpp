#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int, int>v1, pair<int, int>v2)
{
    if(v1.second != v2.second)
        return v1.second > v2.second; 
    return v1.first < v2.first;
}
int cnt[100005], t, n, a[10005];

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        memset(cnt, 0, sizeof(cnt));
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        vector<pair<int, int>> v; 
        for(int i = 0; i < n; ++i)
            v.push_back({a[i], cnt[a[i]]});
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < n; ++i)
            cout << v[i].first << " ";
        cout << "\n";
    }
    return 0;
}