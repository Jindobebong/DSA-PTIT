#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int, int>p1, pair<int, int>p2){
    if(p1.second != p2.second)
        return p1.second < p2.second;
    return p1.first < p1.first;
}
int t, n; 

int main()
{
    cin >> t; 
    while(t--){
        cin >> n; 
        vector<pair<int, int>>v(n);
        for(int i = 0; i < n; ++i)
            cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end(), cmp);
        int cnt = 0, i = 1, j = 0;
        while(i < n){
            if(v[j].second <= v[i].first){
                ++cnt;
                j = i;
                ++i;
            }
            else ++i;
        }
        cout << cnt + 1<< "\n";
    }
    return 0;
}
/*
1
10
39 55
37 74
0 1
19 25
65 76
51 52
19 21
5 94
46 65
32 40
-----
0 1
19 21
19 25
32 40
51 52
39 55
46 65
37 74
65 76
5 94
*/