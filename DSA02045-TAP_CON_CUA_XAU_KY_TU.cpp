#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

vector<string>ans;
int t, n; 
string s; 
void backtrack(int i, string temp){
    if(i == n){
        if(!temp.empty()) ans.push_back(temp);
        return;
    }
    //chọn si
    backtrack(i + 1, temp + s[i]);
    //không chọn si
    backtrack(i + 1, temp);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n >> s; 
        ans.clear();
        backtrack(0, "");
        sort(ans.begin(), ans.end());
        for(auto s : ans)
            cout << s << " ";
        cout << endl;
    }
    return 0;
}