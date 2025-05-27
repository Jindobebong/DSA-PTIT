#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int n, a[25];
vector<string>ans;

void backtrack(int i, vector<int>res){
    if(res.size() >= 2 && res.back() < res[res.size() - 2])
        return; // không cần kiểm tra sau này nữa
    if(i == n){
        if(res.size() >= 2){
            stringstream ss; 
            for(auto x : res){
                ss << x << " ";
            }
            ans.push_back(ss.str());
        }
        return;
    }

    // lấy
    res.push_back(a[i]);
    backtrack(i + 1, res);
    res.pop_back();

    // không lấy
    backtrack(i + 1, res);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n; 
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    ans.clear();
    backtrack(0, {});
    sort(ans.begin(), ans.end());
    for(auto x : ans){
        cout << x << endl;
    }
    return 0;
}