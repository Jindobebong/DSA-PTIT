#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define maxn 1000005
#define endl "\n"
using namespace std;

bool cmp(pii a, pii b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}
int t, n;
vector<pii> a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end(), cmp);

    vector<int> lis;

    for (auto p : a)
    {
        int y = p.second;

        auto it = lower_bound(lis.begin(), lis.end(), y);
        if (it == lis.end())
        {
            // ko tìm thấy thì thêm y vào
            lis.push_back(y);
        }
        else
        {
            // nếu tìm thấy, thay thế phần tử đó = y
            *it = y;
        }
    }
    cout << lis.size() << endl;
    return 0;
}