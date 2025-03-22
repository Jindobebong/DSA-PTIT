#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;
int t;

int main()
{
    cin >> t;
    while(t--){
        cin >> s;
        map<int, int>mp;
        for(int i = 0; i < s.size(); ++i)
            mp[s[i]]++;
        bool ok = 1;
        for(auto x : mp){
            if((x.second - 1) * 2 >= s.size()){
                cout << "-1\n";
                ok = 0;
                break;
            }
        }
        if(ok) cout << "1\n";
    }
    return 0;
}