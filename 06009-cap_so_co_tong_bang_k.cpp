#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; while(t--)
	{
		int n, k; cin >> n >> k; int a[n]; 
		for(int i = 0; i < n; ++i) cin >> a[i]; 
		sort(a, a + n); 
		map<int, int>mp;
		int cnt = 0;
		for(int i = 0; i < n; ++i)
		{
			cnt += mp[k - a[i]];
			mp[a[i]]++;
		}
		cout << cnt << "\n";
	}
}

//ai + aj = k
//aj = k - ai
