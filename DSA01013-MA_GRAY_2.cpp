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
        vector<char>ans; 
        ans.push_back(s[0]);
        for(int i = 1; i < s.size(); ++i){
            ans.push_back((ans[i - 1] - '0') ^ (s[i] - '0') + '0');
        }
        for(auto x : ans)
            cout << x;
        cout << endl;
    }
    return 0;
}

/*
1.  Bit đầu tiên của binary bằng bit đầu tiên của gray.
2.  Các bit sau:
        binary[i] = binary[i-1] ^ gray[i]
*/