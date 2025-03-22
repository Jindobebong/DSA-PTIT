#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s[40], a[40];
int n, k;
bool danhdau[40];
set<string>se;
vector<string>v;

void ql(int i){
    if(i == k + 1){
        for(int j = 1; j <= k; ++j)
            cout << a[j] << ' ';
        cout << endl;
    }
    else{
        for(int j = 0; j < v.size(); ++j){
            if(!danhdau[j] && v[j] > a[i - 1]){
                danhdau[j] = true; 
                a[i] = v[j];
                ql(i + 1); 
                danhdau[j] = false;
            }
        }
    }
}
int main()
{
    cin >> n >> k; 
    for(int i = 1; i <= n; ++i)
    {
        cin >> s[i];
        se.insert(s[i]);
    }
    for(auto x : se)
        v.push_back(x);
    ql(1);
    return 0;
}