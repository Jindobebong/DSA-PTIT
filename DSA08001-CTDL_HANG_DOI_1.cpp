#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t; 
    while(t--){
        cin >> n;
        queue<int>q;
        while(n--){
            int x; cin >> x; 
            if(x == 1) {
                cout << q.size();
                cout << "\n";
            }
            else if(x == 2){
                if(q.size() == 0) cout << "YES";
                else cout << "NO";
                cout << "\n";
            }
            else if(x == 3){
                int m; cin >> m; 
                q.push(m);
            }
            else if(x == 4){
                if(q.size() != 0) q.pop();
            }
            else if(x == 5){
                if(q.size() != 0) cout << q.front(); 
                else cout << -1;
                cout << "\n";
            }
            else if(x == 6){
                queue<int>q1 = q;
                while(q1.size() > 1){
                    q1.pop();
                }
                if(q.size() != 0) cout << q1.front(); 
                else cout << -1;
                cout << "\n";
            }
        }
    }
    return 0;
}