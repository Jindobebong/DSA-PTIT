#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

int t;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> s;
        int n = s.size();
        int dp[50] = {0};
        dp[0] = 1; // chuỗi rỗng
        if (s[0] == '0')
            cout << 0 << endl;
        else
        {
            dp[1] = 1;

            for (int i = 2; i <= n; ++i)
            {
                if (s[i - 1] != '0')
                    dp[i] += dp[i - 1];
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                if (num >= 10 && num <= 26)
                    dp[i] += dp[i - 2];
            }
            cout << dp[n] << endl;
        }
    }
    return 0;
}

/*
dp[i]: số cách giải mã xâu con từ vị trí 0 đến i - 1

th1: 1 kí tự
th2: 2 kí tự
*/