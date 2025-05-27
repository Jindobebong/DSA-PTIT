#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n;
vector<int>a;
vector<vector<int>>ans;
void dequy(vector<int>v){
    while(v.size() > 1){
        vector<int>x;
        for(int i = 0; i < v.size() - 1; ++i)
            x.push_back(v[i] + v[i + 1]);
        ans.push_back(x);
        v = x;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        a.resize(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        ans.clear();
        ans.push_back(a);
        dequy(a);
        reverse(ans.begin(), ans.end());
        for(auto x : ans){
            cout << "[";
            for(int i = 0; i < x.size(); ++i){
                cout << x[i];
                if(i != x.size() - 1) cout << " ";
            }
            cout << "] ";
        }
        cout << endl;
    }
    return 0;
}