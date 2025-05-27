#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

vector<int>res;
void pre(vector<int>a, int l, int r){
    if(l > r) return; 
    int mid = (l + r) / 2;
    pre(a, l, mid - 1);
    pre(a, mid + 1, r);
    res.push_back(a[mid]);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        vector<int>a(n);
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        res.clear();
        pre(a, 0, n - 1);
        for(auto x : res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}