#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        int ans = 0;

        while (n > 1)
        {
            if (n % 3 == 0)
            {
                while (n % 3 == 0)
                {
                    n /= 3;
                }
                ++ans;
            }
            else if (n % 2 == 0)
            {
                while (n % 2 == 0)
                {
                    n /= 2;
                }
                ++ans;
            }
            else
            {
                ++ans;
                n -= 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

/*
10 

5 
4
2 1
*/