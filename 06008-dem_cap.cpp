#include <bits/stdc++.h>
using namespace std;

int ltnp(int a, int b)
{
	int res = 1; 
	while(b)
	{
		if(b % 2)
			res *= a;
		b /= 2;
		a *= a;
	}
	return res;
}
int main() {
	int t; cin >> t; while(t--)
	{
		int n, m; cin >> n >> m; int a[n], b[m]; 
		int cnt = 0 ;
		for(int i = 0; i < n; ++i) cin >> a[i]; 
		for(int j = 0; j < m; ++j)
		{
			cin >> b[j];
			for (int i = 0; i < n; ++i)
			{
				if(ltnp(a[i], b[j]) > ltnp(b[j], a[i])) ++cnt;
			}
		}
		cout << cnt << "\n";
	}
}
