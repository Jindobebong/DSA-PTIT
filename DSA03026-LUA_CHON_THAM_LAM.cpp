#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

string lon_nhat(int n, int s){
    string kq = "";
    if(n * 9 < s || s == 0) 
        return "-1";
    while(n){
        if(s >= 9){
            kq += "9";
            s -= 9;
        }
        else{
            kq += to_string(s);
            s -= s; 
        }
        n--;
    }
    return kq;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, s;
    cin >> n >> s; 
    string kq = lon_nhat(n, s);
    if(kq == "-1"){
        cout << "-1 -1";
    }
    else{
        if(kq[kq.size() - 1] == '0') {
            kq[kq.size() - 1] = '1';
            for(int i = kq.size() - 2; i >= 0; --i){
                if(kq[i] != '0'){
                    kq[i] = char(kq[i] - 1);
                    break;
                }
            }
        }
        reverse(kq.begin(), kq.end());
        cout << kq << " " << lon_nhat(n, s);
    }
    // char s = '3';
    // cout << char(s + 1);
    return 0;
}