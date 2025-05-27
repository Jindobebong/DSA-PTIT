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
        string kq = "";
        kq += s[0];
        for(int i = 1; i < s.size(); ++i){
            if(s[i] == '0') kq += kq[kq.size() - 1];
            else{
                if(kq[kq.size() - 1] == '1') kq += '0';
                else kq += '1';
            }
        }
        cout << kq << endl; 
    }
    return 0;
}