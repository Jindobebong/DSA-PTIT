#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

bool Operator(string s){
    return (s == "+" || s == "-" || s == "*" || s == "/");
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    
    while(t--){
        int n; cin >> n; cin.ignore();
        string s; getline(cin, s);
        stringstream ss(s);
        string word;
        stack<ll>st;
        while(ss >> word){
            if(Operator(word)){
                ll t2 = st.top(); st.pop();
                ll t1 = st.top(); st.pop();
                if(word == "+") st.push(t1 + t2); 
                else if(word == "-") st.push(t1 - t2); 
                else if(word == "*") st.push(t1 * t2);
                else st.push(t1 / t2);
            }
            else st.push(stoll(word));
        }
        cout << st.top() << endl;
    }
    return 0;
}
/*
3
7
2 3 1 * + 9 -
7
8 7 5 * + 9 -
3
-10 -4 +
*/