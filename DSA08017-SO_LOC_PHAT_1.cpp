#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dem(ll n){
    int cnt = 0; 
    while(n){
        ++cnt; 
        n /= 10;
    }
    return cnt;
}
int main()
{
    int t; cin >> t;
    ll n; 
    while(t--){
        cin >> n; 
        priority_queue<ll>q2;
        queue<ll> q1;
        q1.push(6);
        q1.push(8); 
        q2.push(6); q2.push(8); 
        while(dem(q1.front()) < n){
            ll k = q1.front();
            q1.pop();
            q1.push(k * 10 + 6);
            q1.push(k * 10 + 8);
            q2.push(k * 10 + 6);
            q2.push(k * 10 + 8);
        }
        while(q2.empty() == 0){
            cout << q2.top() << " ";
            q2.pop();
        }
        cout << "\n";
    }
    return 0;
}

/*
11 100 101

1 10 11 100 101
*/