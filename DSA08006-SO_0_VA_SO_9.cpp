#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t; 
    while(t--){
        cin >> n;
        queue<ll>q;
        q.push(9);
        while(q.size()){
            ll k = q.front();
            q.pop();
            if(k % n == 0){
                cout << k << endl; 
                break;
            }
            q.push(k * 10);
            q.push(k * 10 + 9);
        }
    }
    return 0;
}

/*
909 990 999 9000 9009
*/