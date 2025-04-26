#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t;
string s;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> s; 
        string ans = "";
        ans += s[0];
        for(int i = 1; i < s.size(); ++i)
            ans += ((s[i] - '0') ^ (s[i - 1] - '0') + '0'); 
        cout << ans << endl; 
    }
    return 0;
}

/*
gray[i] = binary[i] ^ binary[i - 1]
*/