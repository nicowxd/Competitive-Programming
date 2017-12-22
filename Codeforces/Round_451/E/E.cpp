#include <bits/stdc++.h>

using namespace std;

bool sqr (int x)
{
	int ans = sqrt(x);
	if (ans*ans == x)
		return true;
	return false;
}

int main()
{
	
	int n, v[200010], cnt1 = 0, cnt2 = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", v+i);
		if (sqr(v[i]))
			cnt1++;
		else
			cnt2++;
	}

	if (cnt1 == cnt2)
		puts("0");
	else if (cnt1 > cnt2)
	{
		vector<int> cost;
		for (int i = 0; i < n; i++)
		{
			if (sqr(v[i]) and v[i] == 0)
				cost.push_back(2);
			else if (sqr(v[i]) and v[i] >= 1)
				cost.push_back(1);
		}
		
		int ans = 0;
		sort(cost.begin(), cost.end());
		for (int i = 0; i < (cnt1-cnt2)/2; i++)
			ans += cost[i];
		printf("%d\n", ans);
	}
	else
	{
		vector<int> cost;
		for (int i = 0; i < n; i++)
		{
			if (!sqr(v[i]))
			{
				int k = sqrt(v[i]);
				cost.push_back(min(abs(v[i] - k*k), abs((k+1)*(k+1) - v[i])));
			}
		}

		sort(cost.begin(), cost.end());

		long long int sum = 0;
		for (int i = 0; i < (cnt2-cnt1)/2; i++)
			sum += cost[i];
		cout << sum << endl;
	}
	return 0;
}
