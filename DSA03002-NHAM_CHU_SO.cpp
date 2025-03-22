#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a, b; 

int main()
{
    cin >> a >> b; 
    string x = to_string(a), y = to_string(b); 
    string x1 = "", x2 = "", y1 = "", y2 = ""; 
    for(int i = 0; i < x.size(); ++i)
    {
        if(x[i] == '6') x1 += "5"; 
        else x1 += x[i];

        if(x[i] == '5') x2 += "6"; 
        else x2 += x[i];
    }

    for(int i = 0; i < y.size(); ++i)
    {
        if(y[i] == '6') y1 += "5"; 
        else y1 += y[i];

        if(y[i] == '5') y2 += "6"; 
        else y2 += y[i];
    }
    cout << stoi(x1) + stoi(y1) << " " << stoi(x2) + stoi(y2);
    return 0;
}