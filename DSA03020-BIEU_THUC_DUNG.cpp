#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    cin.ignore();
    while(t--){
        string s; 
        cin >> s;
        vector<int>pos;
        int n = s.size(), p = 0, cnt = 0;
        for(int i = 0; i < n; ++i)
            if(s[i] == '[') pos.push_back(i);

        ll res = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == '['){
                ++cnt; 
                ++p;
            }
            else{
                cnt--;
                if(cnt < 0){
                    res += pos[p] - i;
                    swap(s[pos[p]], s[i]);
                    p++;
                    cnt = 1;
                }
            }
        }
        cout << res << endl; 
    }
    return 0;
}

/*
2
[]][][
[][][]
*/