#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[20];
//a = 0, b = 1
bool kt(int a[], int n){
    int dem = 0, cnt = 0; 
    for(int i = 1; i <= n; ++i){
        if(a[i] == 0){
            cnt++;
        }
        else{
            if(cnt == k){
                ++dem;
            }
            cnt = 0;
        }
    }
    if(cnt == k) ++dem; 
    return dem == 1;
}

void ktao(){
    for(int i = 1; i <= n; ++i)
        a[i] = 0;
}
int check = 0;
void sinh(){
    int i = n; 
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) check = 1; 
    else a[i] = 1;
}
int main()
{
    cin >> n >> k; 
    ktao();
    vector<vector<char>>ans; 
    while(!check){
        if(kt(a, n)){
            vector<char>v;
            for(int j = 1; j <= n; ++j)
                if(a[j] == 1)  v.push_back('B'); 
                else v.push_back('A');
            ans.push_back(v);
        }
        sinh();
    }
    cout << ans.size() << "\n";
    for(auto x : ans){
        for(int i = 0; i < x.size(); ++i)
            cout << x[i];
        cout << '\n';
    }
    return 0;
}