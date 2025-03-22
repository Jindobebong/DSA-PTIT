#include <bits/stdc++.h>
#define ll long long
using namespace std;

int s, d, t;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s >> d;
        int cnt = 0;
        string x = "";
        if (s > 9 * d)
        {
            cout << "-1\n";
        }
        else
        {
            s -= 1;
            while (cnt < d)
            {
                ++cnt;
                if (s >= 9)
                {
                    s -= 9;
                    x += (char)(9 + '0');
                }
                else
                {
                    x += (char)(s + '0');
                    s -= s;
                }
            }
            reverse(x.begin(), x.end());
            int y = (int)(x[0]) + 1;
            x[0] = (char)y;
            cout << x << "\n";
        }
    }
    // cout << (char)(2 + '0');
    return 0;
}