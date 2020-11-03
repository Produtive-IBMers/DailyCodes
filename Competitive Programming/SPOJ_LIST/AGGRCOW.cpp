#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 
	int t;
	cin >> t;
	while(t--)
	{
		int n , c;
		cin >> n >> c;
		vector <int> a;
 
		for(int i = 1 ; i <= n ; i++)
		{
			int value;
			cin >> value;
			a.push_back(value);
		}
 
		sort(a.begin() , a.end());
 
		int lo = 0, hi = a[n-1];
 
		while(lo < hi)
		{
			int mid = lo + (hi - lo + 1) / 2;
 
			int cur = a[0] , req = 1;
			for(int i = 1 ; i < n ; i++)
			{
				if(a[i] - cur >= mid)
				{
					req++;
					cur = a[i];
				}
			}
 
 
			if(req >= c)
				lo = mid;
			else
				hi = mid - 1;
		}
		cout << lo << endl;
	}
	return 0;
}