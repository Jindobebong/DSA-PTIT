#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, stt;
string s;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> stt >> s;
        bool ok = 0;
        while(next_permutation(s.begin(), s.end())){
            cout << stt << " " << s;
            ok = 1;
            break;
        }
        if(!ok) cout << stt << " BIGGEST";
        cout << endl;
    }
    return 0;
}