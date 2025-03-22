#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    ll n; 
    while(t--){
        cin >> n; 
        queue<ll>q1, q2;
        q1.push(1); q2.push(1);
        while(q1.front() * 10 <= n && q1.size()){
            ll k = q1.front();
            q1.pop();
            q1.push(k * 10);
            q1.push(k * 10 + 1);
            q2.push(k * 10);
            if(k * 10 + 1 <= n) q2.push(k * 10 + 1);
        }
        cout << q2.size() << "\n";
    }
    return 0;
}

/*
11 100 101

1 10 11 100 101
*/