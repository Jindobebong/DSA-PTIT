#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    int t, n; cin >> t;
    while(t--){
        cin >> n; 
        queue<int>q;
        q.push(1);
        while(!q.empty()){
            int k = q.front();
            q.pop();
            if(k % n == 0){
                cout << k << endl;
                break;
            }
            q.push(k * 10);
            q.push(k * 10 + 1);
        }
    }
    return 0;
}