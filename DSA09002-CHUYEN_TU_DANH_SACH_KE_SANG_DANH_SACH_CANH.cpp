#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; 
    cin.ignore();
    set<pair<int, int>>se;
    for(int i = 1; i <= n; ++i){
        string s, word; getline(cin, s);
        stringstream ss(s);
        while(ss >> word){
            int a = i, b = stoi(word);
            if(a > b)
                swap(a, b);
            se.insert({a, b});
        }
    }
    for(auto x : se)
        cout << x.first << " " << x.second << "\n";
    return 0;
}

/*

3
2 3
1 3
1 2
*/