#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t, n; 

vector<string> gray(int n){
    if(n == 0) return {""};
    vector<string>prev = gray(n - 1); 
    vector<string>result; 

    //gắn "0" vào trước
    for(string s : prev)
        result.push_back('0' + s); 
    //gắn "1" vào trước nhưng theo thứ tự ngược
    for(int i = prev.size() - 1; i >= 0; --i)
        result.push_back('1' + prev[i]);
    return result;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t; 
    while(t--){
        cin >> n; 
        vector<string>print = gray(n); 
        for(auto s : print)
            cout << s << " ";
        cout << endl; 
    }
    return 0;
}