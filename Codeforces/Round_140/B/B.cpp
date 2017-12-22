#include <bits/stdc++.h>

using namespace std;

int main()
{

	int pos[100005], n, val;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &val);
		pos[val] = i;
	}
	
	int m;
	scanf("%d", &m);
	
	long long ans1 = 0, ans2 = 0;
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &val);
		ans1+= pos[val];
		ans2+= n - pos[val] + 1;
	}
	cout << ans1 << " " << ans2 << endl;
	return 0;
}
