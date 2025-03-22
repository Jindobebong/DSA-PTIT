#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, d; 
string s;

int main()
{
    cin >> t; 
    while(t--){
        cin >> d >> s;
        map<char, int>mp; 
        for(auto x : s)
            mp[x]++;
        bool ok = 1;
        for(auto x : mp){
            if((x.second - 1) * d > s.size()){
                cout << -1;
                ok = 0;
                break;
            }
        }
        if(ok) cout << 1;
        cout << "\n";
    }
    return 0;
}