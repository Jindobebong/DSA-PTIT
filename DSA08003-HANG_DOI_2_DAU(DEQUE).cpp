#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int q; cin >> q;
    deque<int>dq;
    while(q--){
        string s; cin >> s; int x;
        if(s == "PUSHFRONT"){
            cin >> x; 
            dq.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(dq.size()) cout << dq.front();
            else cout << "NONE";
            cout << "\n";
        }
        else if(s == "POPFRONT"){
            if(dq.size()) dq.pop_front();
        }
        else if(s == "PUSHBACK"){
            cin >> x; 
            dq.push_back(x);
        }
        else if(s == "PRINTBACK"){
            if(dq.size()) cout << dq.back();
            else cout << "NONE";
            cout << "\n";
        }
        else if(s == "POPBACK"){
            if(dq.size()) dq.pop_back();
        }
    }
    return 0;
}