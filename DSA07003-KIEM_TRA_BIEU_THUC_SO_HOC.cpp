#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t;

int main()
{
    cin >> t; 
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int cnt1 = 0, cnt2 = 0;
        bool ok = 1;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ')') ++cnt1;
            else if(s[i] == '+' || s[i] == '-') ++cnt2;
        }
        if(cnt1 != cnt2) cout << "Yes";
        else cout << "No";
        cout << "\n";
    }
    return 0;
}
/*
3
((a+b))
(a + (b)/c)
(a + b*(c-d))
*/