#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, k; 
string s;

int main()
{
    cin >> t; 
    while(t--){
        cin >> k >> s; 
        map<char, int>mp;
        for(int i = 0; i < s.size(); ++i)
            mp[s[i]]++;
        vector<int>v;
        for(auto x : mp){
            v.push_back(x.second);
        }
        ll sum = 0;
        sort(v.begin(), v.end());
        while(k){
            v[v.size() - 1]--;
            sort(v.begin(), v.end());
            k--;
        }
        for(auto x : v){
            sum += x * x;
        }
        cout << sum << "\n";
    }
    return 0;
}