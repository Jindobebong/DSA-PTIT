#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n, a[40], b[40];
vector<string>res;
int check(vector<int>v){
    for(int i = 1; i < v.size(); ++i){
        if(v[i] <= v[i - 1]) return 0;
    }
    return 1;
}
void ql(int i){
    if(i == n + 1){
        vector<int>v;
        for(int j = 1; j <= n; ++j){
            if(b[j]) v.push_back(a[j]);
        }
        if(v.size() > 1 && check(v)) {
            stringstream ss;
            for(auto x : v)
                ss << x << " ";
            res.push_back(ss.str());
        }
        return;
    }
    for(int j = 0; j <= 1; ++j){
        b[i] = j;
        ql(i + 1);
    }
}
int main()
{
    cin >> n; 
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    ql(1);    
    sort(res.begin(), res.end()); 
    for(auto x : res)
        cout << x << "\n";
    return 0;
}
/*
4
6 3 7 11
*/