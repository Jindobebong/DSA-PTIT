#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int q; cin >> q; 
    queue<int>qe;
    while(q--){
        string s; cin >> s; int x;
        if(s == "PUSH"){
            cin >> x; 
            qe.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(qe.size() != 0) cout << qe.front();
            else cout << "NONE";
            cout << "\n";
        }
        else if(s == "POP"){
            if(qe.size() != 0) qe.pop();
        }
    }
    return 0;
}