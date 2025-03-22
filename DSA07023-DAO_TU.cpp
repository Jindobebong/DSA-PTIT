#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t; 
string s;

int main()
{
    cin >> t; 
    cin.ignore(); 
    while(t--){
        getline(cin, s);
        stringstream ss(s);
        string a; 
        vector<string>res;
        while(ss >> a){
            res.push_back(a);
        }
        reverse(res.begin(), res.end()); 
        for(auto i : res)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
/*
2
I like this program very much
much very program this like I
*/