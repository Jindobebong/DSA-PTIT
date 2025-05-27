#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T; 
    while(T--){
        int s, t;cin >> s >> t; 
        int cnt = 0; 
        while(t > s){
            if(t % 2 == 0) t /= 2;
            else t += 1;
            cnt++;
        }
        cout << cnt + (s - t) << endl;
    }
    return 0;
}