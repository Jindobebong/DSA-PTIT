#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int t, n;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n;
        ll s = 9; 
        queue<ll>q;
        q.push(s);
        while(q.front() % n != 0){
            ll k = q.front();
            q.pop();
            q.push(k * 10);
            q.push(k * 10 + 9);
        }
        cout << q.front() << endl; 
    }
    return 0;
}