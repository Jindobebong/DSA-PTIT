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
        string s1, s2; 
        getline(cin, s1);
        getline(cin, s2);
        string word;
        stringstream ss(s1);
        map<int, int>mp;
        while(ss >> word){
            if(word != "+"){
                int i, heso = 0, somu = 0;
                for(i = 0; i < word.size(); ++i){
                    if(word[i] == '*') break;
                    else{
                        heso = heso * 10 + (word[i] - '0');
                    }
                }
                i += 3;
                for(i; i < word.size(); ++i){
                    somu = somu * 10 + (word[i] - '0');
                }
                mp[somu] += heso;
            }
        }
        stringstream sss(s2);
        while(sss >> word){
            if(word != "+"){
                int i, heso = 0, somu = 0;
                for(i = 0; i < word.size(); ++i){
                    if(word[i] == '*') break;
                    else{
                        heso = heso * 10 + (word[i] - '0');
                    }
                }
                i += 3;
                for(i; i < word.size(); ++i){
                    somu = somu * 10 + (word[i] - '0');
                }
                mp[somu] += heso;
            }
        }
        vector<string>ans;
        for(auto [x, y] : mp){
            string res = "";
            res += to_string(y);
            res += "*x^";
            res += to_string(x);
            ans.push_back(res);
        }
        reverse(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); ++i){
            cout << ans[i];
            if(i != ans.size() - 1) cout << " + ";
        }
        cout << endl;
    }
    return 0;
}
/*
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
*/