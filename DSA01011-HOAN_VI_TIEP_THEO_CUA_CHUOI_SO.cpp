#include <bits/stdc++.h>
#define ll long long
using namespace std;

int stt, t;
string s;

int main()
{
    cin >> t; 
    while(t--){
        cin >> stt >> s;
        int i = s.size() - 2, n = s.size();
        while(i >= 0 && s[i] >= s[i + 1])
            --i; 
        if(i < 0){
            cout << stt << " BIGGEST";
        }
        else{
            int j = s.size() - 1; 
            while(s[i] >= s[j]) --j;
            swap(s[i], s[j]); 
            reverse(s.begin() + i + 1, s.end());
            cout << stt << " " << s;
        }
        cout << '\n';
    }
    return 0;
}
/*
3
1 123
2 279134399742
3 987
*/