#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t; 
string s;
char a[20];
bool danhdau[20]; 

void ql(int i){
    if(i == s.size()){
        for(int j = 0; j < s.size(); ++j)
            cout << a[j];
        cout << " ";
    }
    else 
    {
        for(int j = 0; j < s.size(); ++j){
            if(!danhdau[j]){
                danhdau[j] = true; 
                a[i] = s[j]; 
                ql(i + 1);
                danhdau[j] = false;
            }
        }
    }
}
int main()
{
    cin >> t; 
    while(t--)
    {
        cin >> s; 
        ql(0);
        cout << endl;
    }
    return 0;
}