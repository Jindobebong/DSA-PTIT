#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        string s; cin >> s;
        stack<int>st_num; 
        stack<string>st_str;
        int num = 0; 
        string str = "";

        for(int i = 0; i < s.size(); ++i){
            if(s[i] >= '0' && s[i] <= '9'){
                num = num * 10 + (s[i] - '0');
            }
            else if(s[i] == '['){
                if(num == 0) num = 1;
                st_num.push(num);
                st_str.push(str);
                num = 0; 
                str = "";
            }
            else if(s[i] == ']'){
                int k = st_num.top(); st_num.pop();
                string x = st_str.top(); st_str.pop();
                string ans = "";
                for(int j = 0; j < k; ++j)
                    ans += str;
                str = x + ans;
            }
            else{
                str += s[i];
            }
        }
        cout << str << endl;
    }
    return 0;
}