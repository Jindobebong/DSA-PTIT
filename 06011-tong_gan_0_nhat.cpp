#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--)
	{
		int n; cin >> n; int a[n]; 
		for(int i = 0; i < n; ++i) cin >> a[i];
		int ans = 1e9;
		for(int i = 0; i < n; ++i)
		{
			for(int j = i + 1; j < n; ++j)
			{
				int s = a[i] + a[j];
				if(abs(ans) > abs(s))
					ans = s;
			}
		}
		cout << ans << "\n";
	}
}
