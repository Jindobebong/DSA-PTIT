#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n; cin >> t; 
    while(t--){
        cin >> n; 
        for(int i = 1; i <= n; ++i){
            stack<int>st; 
            int j = i; 
            while(j){
                st.push(j % 2);
                j /= 2;
            }
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}