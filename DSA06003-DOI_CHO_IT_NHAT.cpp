#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            int min_i = i;
            for (int j = i + 1; j < n; ++j)
            {
                if (a[min_i] > a[j])
                    min_i = j;
            }
            if (a[min_i] != a[i])
            {
                swap(a[min_i], a[i]);
                ++cnt;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}

/*
2
4
4 3 2 1
5
1 5 4 3 2

5 4 2 1 3 //
1 4 2 5 3
1 2 4 5 3
1 2 3 5 4
1 2 3 4 5

4 3 2 1 //
1 3 2 4
1 2 3 4
*/