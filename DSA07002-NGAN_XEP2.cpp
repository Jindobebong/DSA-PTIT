#include <bits/stdc++.h>
#define ll long long
using namespace std;

int q, x; 
string s;
stack<int>st;

int main()
{
    cin >> q; 
    while(q--){
        cin >> s; 
        if(s == "PUSH"){
            cin >> x;
            st.push(x);
        }
        else if(s == "POP"){
            if(st.empty() == 0){
                st.pop();
            }
        }
        else if(s == "PRINT"){
            if(st.empty()) cout << "NONE\n";
            else{
                cout << st.top() << "\n";
            }
        }
    }
    return 0;
}