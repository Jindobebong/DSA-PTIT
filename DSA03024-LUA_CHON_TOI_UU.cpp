#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
#define pii pair<int, int>
using namespace std;

int t, n; 
vector<pii>v;
bool cmp(pii a, pii b){
    if(a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        v.resize(n);
        for(int i = 0; i < n; ++i) 
            cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end(), cmp);
        int cnt = 1, i = 0, j = 1; 
        while(i < n && j < n){
            if(v[i].second <= v[j].first){
                ++cnt; 
                i = j;
                ++j;
            }
            else ++j;
        }
        cout << cnt << endl;
    }
    return 0;
}